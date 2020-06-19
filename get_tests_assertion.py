
import re

assertion_reglex = re.compile('ASSERT(.*)')
expect_reglex = re.compile('EXPECT(.*)')
test_re = re.compile('TEST_*F*(.*)')


def get_assertion_statement(file):
    assertion_no = 0
    tests_no = 0
    codes = []
    try:
        with open(file) as f:
            for code in f.readlines():
                if test_re.search(code):
                    codes.append(code)
                    tests_no = tests_no + 1
                if assertion_reglex.search(code) or expect_reglex.search(code):
                    codes.append(code)
                    assertion_no = assertion_no + 1
        f.close()
    except:
        print("file cannot open:, %s" % file)
    test_info = {'assertion_number': assertion_no, "tests_number": tests_no, "codes": codes}
    
    return test_info





