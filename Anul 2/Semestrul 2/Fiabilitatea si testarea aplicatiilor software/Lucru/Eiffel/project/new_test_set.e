note
	description: "[
		Eiffel tests that can be executed by testing tool.
	]"
	author: "EiffelStudio test wizard"
	date: "$Date$"
	revision: "$Revision$"
	testing: "type/manual"

class
	NEW_TEST_SET

inherit
	EQA_TEST_SET

feature -- Test routines

	new_test_routine
			-- New test routine
		note
			testing:  "covers/{APPLICATION}"
		do
			assert ("not_implemented", True)
		end

end


