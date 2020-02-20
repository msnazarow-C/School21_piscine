#!/usr/bin/env perl
		use strict;
		use warnings;
		use feature 'say';
		
		my $program = './work/ex12/main';

		

my %tests;

		%tests = (
	"$program" => "\n",
	"$program asdf" => "\n",
	"$program qwer" => "qwer,\n",
	"$program qwer asdf zxcv" => "qwer,zxcv,\n",
	"$program ''" => ",\n",
	"$program uiop aaaaa qwer alpha zxcv asdf hjkl" => "uiop,qwer,zxcv,hjkl,\n",
	"$program wat atw taw awt twa" => "wat,taw,twa,\n",
);

		


		my $errors = 0;
		foreach my $test (sort keys %tests) {
			my $output = `$test`;
			my $expected = $tests{$test};
			if ($output ne $expected) {
				say "!!!! ERROR in work/ex12/main test `$test`: '$output'";
				say "!!!! EXPECTED: '$expected'" if defined $expected;
				$errors++;
			}
			# else { say "debug good: $output"; }
		}
		if ($errors == 0) {
			say 'work/ex12/main good!';
		}
	
	