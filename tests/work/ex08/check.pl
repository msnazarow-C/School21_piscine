#!/usr/bin/env perl
		use strict;
		use warnings;
		use feature 'say';
		
		my $program = './work/ex08/main';

		

my %tests;

		%tests = (
	"$program" => "\n",
	"$program asdf" => "asdf,\n",
	"$program asdf qwer" => "qwer,asdf,\n",
	"$program asdf qwer zxcv" => "zxcv,qwer,asdf,\n",
	"$program ''" => ",\n",
	"$program 15 '' 25" => "25,,15,\n",
	"$program wat" => "wat,\n",
);

		


		my $errors = 0;
		foreach my $test (sort keys %tests) {
			my $output = `$test`;
			my $expected = $tests{$test};
			if ($output ne $expected) {
				say "!!!! ERROR in work/ex08/main test `$test`: '$output'";
				say "!!!! EXPECTED: '$expected'" if defined $expected;
				$errors++;
			}
			# else { say "debug good: $output"; }
		}
		if ($errors == 0) {
			say 'work/ex08/main good!';
		}
	
	