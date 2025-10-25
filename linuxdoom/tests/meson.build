tests = [
  'm_string',
]

testing_lib = library('ldoom-testing', files('t_tests.c'))
testing_inc = include_directories('.')
testing_dep = declare_dependency(link_with : [testing_lib], include_directories : [testing_inc])

foreach test : tests
  test_exe = executable(test, files(test + '.c'), dependencies : [testing_dep])
  test(test, test_exe)
endforeach
