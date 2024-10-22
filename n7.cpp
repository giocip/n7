#include "num7.h"
using namespace num7;
//PROTOTYPES
void display_NOT_VALID_OPERATION(char*);
void display_help(void);

int main(int n_args, char* args[]) {
	if (n_args < 2) { display_help(); exit(2); } //ONLY FILE_NAME
	NUM result = 0;      //FINAL RESULT
	i32 result_int = 0; //FINAL INTEGER RESULT FOR RELATIONAL OPERATORS
	NUM OP2 = 0;       //SECOND OPERAND 
	i64 SIGN = 0,     //SIGN FLAG (1 => '+' OR '-')
		P = 32,      //PRECISION DEFAULT
		L = 0;      //LENGTH ARGUMENT
	//ARITHMETIC OPERATION
	if (!strcmp("<", args[1]) || !strcmp("lt", args[1]) || !strcmp("-lt", args[1])) {
		if (args[2] == NULL) { display_NOT_VALID_OPERATION(args[1]); exit(2); }
		SIGN = args[2][0] == '+' || args[2][0] == '-';
		if (!SIGN && is_strfmt_int(args[2])) result = i64int(args[2]);
		else if (SIGN && is_strfmt_int(args[2] + 1)) result = i64int(args[2]);
		else result = args[2];
		SIGN = args[3][0] == '+' || args[3][0] == '-';
		if (!SIGN && is_strfmt_int(args[3])) OP2 = i64int(args[3]);
		else if (SIGN && is_strfmt_int(args[3] + 1)) OP2 = i64int(args[3]);
		else OP2 = args[3];
		result = (result < OP2);
		result_int = result.to_i32();
		if (error()) exit(2); //FAILURE
		if (!args[4]) { print(result_int, "\n"); return !result_int; } //RESULT OUTPUT
		return !result_int;
	}
	else if (!strcmp("<=", args[1]) || !strcmp("le", args[1]) || !strcmp("-le", args[1])) {
		if (args[2] == NULL) { display_NOT_VALID_OPERATION(args[1]); exit(2); }
		SIGN = args[2][0] == '+' || args[2][0] == '-';
		if (!SIGN && is_strfmt_int(args[2])) result = i64int(args[2]);
		else if (SIGN && is_strfmt_int(args[2] + 1)) result = i64int(args[2]);
		else result = args[2];
		SIGN = args[3][0] == '+' || args[3][0] == '-';
		if (!SIGN && is_strfmt_int(args[3])) OP2 = i64int(args[3]);
		else if (SIGN && is_strfmt_int(args[3] + 1)) OP2 = i64int(args[3]);
		else OP2 = args[3];
		result = (result <= OP2);
		result_int = result.to_i32();
		if (error()) exit(2); //FAILURE
		if (!args[4]) { print(result_int, "\n"); return !result_int; } //RESULT OUTPUT
		return !result_int;
	}
	else if (!strcmp(">", args[1]) || !strcmp("gt", args[1]) || !strcmp("-gt", args[1])) {
		if (args[2] == NULL) { display_NOT_VALID_OPERATION(args[1]); exit(2); }
		SIGN = args[2][0] == '+' || args[2][0] == '-';
		if (!SIGN && is_strfmt_int(args[2])) result = i64int(args[2]);
		else if (SIGN && is_strfmt_int(args[2] + 1)) result = i64int(args[2]);
		else result = args[2];
		SIGN = args[3][0] == '+' || args[3][0] == '-';
		if (!SIGN && is_strfmt_int(args[3])) OP2 = i64int(args[3]);
		else if (SIGN && is_strfmt_int(args[3] + 1)) OP2 = i64int(args[3]);
		else OP2 = args[3];
		result = (result > OP2);
		result_int = result.to_i32();
		if (error()) exit(2); //FAILURE
		if (!args[4]) { print(result_int, "\n"); return !result_int; } //RESULT OUTPUT
		return !result_int;
	}
	else if (!strcmp(">=", args[1]) || !strcmp("ge", args[1]) || !strcmp("-ge", args[1])) {
		if (args[2] == NULL) { display_NOT_VALID_OPERATION(args[1]); exit(2); }
		SIGN = args[2][0] == '+' || args[2][0] == '-';
		if (!SIGN && is_strfmt_int(args[2])) result = i64int(args[2]);
		else if (SIGN && is_strfmt_int(args[2] + 1)) result = i64int(args[2]);
		else result = args[2];
		SIGN = args[3][0] == '+' || args[3][0] == '-';
		if (!SIGN && is_strfmt_int(args[3])) OP2 = i64int(args[3]);
		else if (SIGN && is_strfmt_int(args[3] + 1)) OP2 = i64int(args[3]);
		else OP2 = args[3];
		result = (result >= OP2);
		result_int = result.to_i32();
		if (error()) exit(2); //FAILURE
		if (!args[4]) { print(result_int, "\n"); return !result_int; } //RESULT OUTPUT
		return !result_int;
	}
	else if (!strcmp("=", args[1]) || !strcmp("==", args[1]) || !strcmp("eq", args[1]) || !strcmp("-eq", args[1])) {
		if (args[2] == NULL) { display_NOT_VALID_OPERATION(args[1]); exit(2); }
		SIGN = args[2][0] == '+' || args[2][0] == '-';
		if (!SIGN && is_strfmt_int(args[2])) result = i64int(args[2]);
		else if (SIGN && is_strfmt_int(args[2] + 1)) result = i64int(args[2]);
		else result = args[2];
		SIGN = args[3][0] == '+' || args[3][0] == '-';
		if (!SIGN && is_strfmt_int(args[3])) OP2 = i64int(args[3]);
		else if (SIGN && is_strfmt_int(args[3] + 1)) OP2 = i64int(args[3]);
		else OP2 = args[3];
		result = (result == OP2);
		result_int = result.to_i32();
		if (error()) exit(2); //FAILURE
		if (!args[4]) { print(result_int, "\n"); return !result_int; } //RESULT OUTPUT
		return !result_int;
	}
	else if (!strcmp("!=", args[1]) || !strcmp("ne", args[1]) || !strcmp("-ne", args[1])) {
		if (args[2] == NULL) { display_NOT_VALID_OPERATION(args[1]); exit(2); }
		SIGN = args[2][0] == '+' || args[2][0] == '-';
		if (!SIGN && is_strfmt_int(args[2])) result = i64int(args[2]);
		else if (SIGN && is_strfmt_int(args[2] + 1)) result = i64int(args[2]);
		else result = args[2];
		SIGN = args[3][0] == '+' || args[3][0] == '-';
		if (!SIGN && is_strfmt_int(args[3])) OP2 = i64int(args[3]);
		else if (SIGN && is_strfmt_int(args[3] + 1)) OP2 = i64int(args[3]);
		else OP2 = args[3];
		result = (result != OP2);
		result_int = result.to_i32();
		if (error()) exit(2); //FAILURE
		if (!args[4]) { print(result_int, "\n"); return !result_int; } //RESULT OUTPUT
		return !result_int;
	}
	else if (!strcmp("add", args[1])) result = add(args[2], args[3]);
	else if (!strcmp("sub", args[1])) result = sub(args[2], args[3]);
	else if (!strcmp("mul", args[1])) result = mul(args[2], args[3]);
	else if (!strcmp("div", args[1])) result = div(args[2], args[3], i64int(args[4] ? args[4] : "32"));
	else if (!strcmp("mod", args[1])) result = mod(args[2], args[3]);
	else if (!strcmp("inv", args[1])) result = inv(args[2], i64int(args[3] ? args[3] : "32"));
	else if (!strcmp("x2", args[1])) result = x2(args[2]);
	else if (!strcmp("x3", args[1])) result = x3(args[2]);
	else if (!strcmp("xy", args[1])) result = xy(args[2], args[3]);
	else if (!strcmp("10y", args[1])) result = _10y(args[2]);
	else if (!strcmp("2y", args[1])) result = _2y(args[2]);
	else if (!strcmp("ey", args[1])) result = _ey(args[2]);
	else if (!strcmp("abs", args[1]))result = Abs(args[2]);
	else if (!strcmp("10x", args[1]))result = _10x(args[2]);
	else if (!strcmp("100x", args[1]))result = _100x(args[2]);
	else if (!strcmp("1000x", args[1]))result = _1000x(args[2]);
	else if (!strcmp("10div", args[1]))result = _10div(args[2]);
	else if (!strcmp("100div", args[1]))result = _100div(args[2]);
	else if (!strcmp("1000div", args[1]))result = _1000div(args[2]);
	else if (!strcmp("shift", args[1])) { NUM T(args[2]); result = shift(T, args[3]); }  
	else if (!strcmp("pct", args[1])) result = pct(args[2], (args[3] ? args[3] : "1.0"));
	else if (!strcmp("pth", args[1])) result = pth(args[2], (args[3] ? args[3] : "1.0"));
	else if (!strcmp("spoff", args[1])) result = spinoff(args[2], (args[3] ? args[3] : "1.0"));
	else if (!strcmp("spon", args[1])) result = spinon(args[2], (args[3] ? args[3] : "1.0"));

	else if (!strcmp("sqr", args[1])) result = sqr(args[2], i64int(args[3] ? args[3] : "6"));
	else if (!strcmp("fact", args[1])) result = fact(i64int(args[2]));
	else if (!strcmp("rnd", args[1])) result = round(args[2], i64int(args[3] ? args[3] : "2"));
	else if (!strcmp("rndb", args[1])) result = round_bank(args[2], i64int(args[3] ? args[3] : "2"));
	else if (!strcmp("rndc", args[1])) result = round_ceil(args[2], i64int(args[3] ? args[3] : "0"));
	else if (!strcmp("rndf", args[1])) result = round_floor(args[2], i64int(args[3] ? args[3] : "0"));
	
	else if (!strcmp("is_zero", args[1])) { 
		NUM T(args[2]);
		result = is_zero(&T);
		result_int = result.to_i32();
		if (error()) exit(2); //FAILURE
		if (!args[3]) { print(result_int, "\n"); return !result_int; } //RESULT OUTPUT
		return !result_int;
	}
	else if (!strcmp("is_pos", args[1])) { 
		NUM T(args[2]);
		result = T.is_positive();
		result_int = result.to_i32();
		if (error()) exit(2); //FAILURE
		if (!args[3]) { print(result_int, "\n"); return !result_int; } //RESULT OUTPUT
		return !result_int;
	}
	else if (!strcmp("is_neg", args[1])) { 
		NUM T(args[2]);
		result = T.is_negative();
		result_int = result.to_i32();
		if (error()) exit(2); //FAILURE
		if (!args[3]) { print(result_int, "\n"); return !result_int; } //RESULT OUTPUT
		return !result_int;
	}
	else if (!strcmp("is_even", args[1])) { 
		NUM T(args[2]);
		result = T.is_even();
		result_int = result.to_i32();
		if (error()) exit(2); //FAILURE
		if (!args[3]) { print(result_int, "\n"); return !result_int; } //RESULT OUTPUT
		return !result_int;
	}
	else if (!strcmp("is_odd", args[1])) { 
		NUM T(args[2]);
		result = T.is_odd();
		result_int = result.to_i32();
		if (error()) exit(2); //FAILURE
		if (!args[3]) { print(result_int, "\n"); return !result_int; } //RESULT OUTPUT
		return !result_int;
	}
	else if (!strcmp("is_int", args[1])) { 
		NUM T(args[2]);
		result = T.is_integer();
		result_int = result.to_i32();
		if (error()) exit(2); //FAILURE
		if (!args[3]) { print(result_int, "\n"); return !result_int; } //RESULT OUTPUT
		return !result_int;
	}
	else if (!strcmp("is_float", args[1])) { 
		NUM T(args[2]);
		result = T.is_floating();
		result_int = result.to_i32();
		if (error()) exit(2); //FAILURE
		if (!args[3]) { print(result_int, "\n"); return !result_int; } //RESULT OUTPUT
		return !result_int;
	}
	else if (!strcmp("is_prime", args[1])) { 
		NUM T(args[2]);
		result = T.is_prime();
		result_int = result.to_i32();
		if (error()) exit(2); //FAILURE
		if (!args[3]) { print(result_int, "\n"); return !result_int; } //RESULT OUTPUT
		return !result_int;
	}
	else if (!strcmp("sum", args[1])) {
		SIGN = args[2][0] == '+' || args[2][0] == '-';
		if (!SIGN && is_strfmt_int(args[2])) result = i64int(args[2]);
		else if (SIGN && is_strfmt_int(args[2] + 1)) result = i64int(args[2]);
		else result = args[2];
		for (int i = 3; i < n_args; i++) {
			SIGN = args[i][0] == '+' || args[i][0] == '-';
			if (!SIGN && is_strfmt_int(args[i])) OP2 = i64int(args[i]);
			else if (SIGN && is_strfmt_int(args[i] + 1)) OP2 = i64int(args[i]);
			else OP2 = args[i];
			result = add(result, OP2);
		}
	}
	else if (!strcmp("mean", args[1])) {
		SIGN = args[2][0] == '+' || args[2][0] == '-';
		if (!SIGN && is_strfmt_int(args[2])) result = i64int(args[2]);
		else if (SIGN && is_strfmt_int(args[2] + 1)) result = i64int(args[2]);
		else result = args[2];
		for (int i = 3; i < n_args; i++) {
			SIGN = args[i][0] == '+' || args[i][0] == '-';
			if (!SIGN && is_strfmt_int(args[i])) OP2 = i64int(args[i]);
			else if (SIGN && is_strfmt_int(args[i] + 1)) OP2 = i64int(args[i]);
			else OP2 = args[i];
			result = add(result, OP2);
		}
		result /= (n_args - 2);
	}
	else if (!strcmp("min", args[1])) {
		SIGN = args[2][0] == '+' || args[2][0] == '-';
		if (!SIGN && is_strfmt_int(args[2])) result = i64int(args[2]);
		else if (SIGN && is_strfmt_int(args[2] + 1)) result = i64int(args[2]);
		else result = args[2];
		for (int i = 3; i < n_args; i++) {
			SIGN = args[i][0] == '+' || args[i][0] == '-';
			if (!SIGN && is_strfmt_int(args[i])) OP2 = i64int(args[i]);
			else if (SIGN && is_strfmt_int(args[i] + 1)) OP2 = i64int(args[i]);
			else OP2 = args[i];
			result = (result < OP2 ? result : OP2);
		}
	}
	else if (!strcmp("max", args[1])) {
		SIGN = args[2][0] == '+' || args[2][0] == '-';
		if (!SIGN && is_strfmt_int(args[2])) result = i64int(args[2]);
		else if (SIGN && is_strfmt_int(args[2] + 1)) result = i64int(args[2]);
		else result = args[2];
		for (int i = 3; i < n_args; i++) {
			SIGN = args[i][0] == '+' || args[i][0] == '-';
			if (!SIGN && is_strfmt_int(args[i])) OP2 = i64int(args[i]);
			else if (SIGN && is_strfmt_int(args[i] + 1)) OP2 = i64int(args[i]);
			else OP2 = args[i];
			result = (result > OP2 ? result : OP2);
		}
	}
	else if (!strcmp("pi", args[1])) { result = pi(); }
	else if (!strcmp( "e", args[1])) { result =  e(); }
	///////////////////////// PRINT AND DISPLAY /////////////////////////
	else if (!strcmp("sci", args[1])) { //CODE: n7 sci 200.0e-5 => 2.0e-3
		result = args[2];
		result.into_exp();   //SCIENTIFIC NOTATION
		if (error()) exit(2);
		print_exp(result, "\n"); //OUTPUT
		return 0;
	}
	else if (!strcmp("exp", args[1])) { //CODE: n7 exp 200.0e-5 => 200.0e-5
		result = args[2];
		if (error()) exit(2);
		print_exp(result, "\n"); //EXPONENTIAL AND SCIENTIFIC NOTATION OUTPUT
		return 0;
	}
	else if (!strcmp("bits", args[1])) {
		result = args[2];
		if (error()) exit(2); //FAILURE
		char* ram = result.bits(args[3] ? i32int(args[3]) : 1);
		print(ram, "\n"); //OUTPUT
		free(ram);
		return 0;
	}
	else if (!strcmp("-h", args[1]) || !strcmp("--help", args[1])) { //INSTRUCTION HELP
		display_help();
		return 0;
	}
	else if (strlen(args[1]) > 1) {
		display_NOT_VALID_OPERATION(args[1]);
		exit(2);
	}
	else switch (args[1][0]) { ///////////////// SWITCH CASE /////////////////
	case '+':
		if (args[2] == NULL) { display_NOT_VALID_OPERATION(args[1]); exit(2); }
		SIGN = args[2][0] == '+' || args[2][0] == '-';
		if (!SIGN && is_strfmt_int(args[2])) result = i64int(args[2]);
		else if (SIGN && is_strfmt_int(args[2] + 1)) result = i64int(args[2]);
		else result = args[2];
		for (int i = 3; i < n_args; i++) {
			SIGN = args[i][0] == '+' || args[i][0] == '-';
			if (!SIGN && is_strfmt_int(args[i])) OP2 = i64int(args[i]);
			else if (SIGN && is_strfmt_int(args[i] + 1)) OP2 = i64int(args[i]);
			else OP2 = args[i];
			result = add(result, OP2);
		}
		break;
	case '-':
		if (args[2] == NULL) { display_NOT_VALID_OPERATION(args[1]); exit(2); }
		SIGN = args[2][0] == '+' || args[2][0] == '-';
		if (!SIGN && is_strfmt_int(args[2])) result = i64int(args[2]);
		else if (SIGN && is_strfmt_int(args[2] + 1)) result = i64int(args[2]);
		else result = args[2];
		for (int i = 3; i < n_args; i++) {
			SIGN = args[i][0] == '+' || args[i][0] == '-';
			if (!SIGN && is_strfmt_int(args[i])) OP2 = i64int(args[i]);
			else if (SIGN && is_strfmt_int(args[i] + 1)) OP2 = i64int(args[i]);
			else OP2 = args[i];
			result = sub(result, OP2);
		}
		break;
	case '*':
	case 'x':
	case 'X':
		if (args[2] == NULL) { display_NOT_VALID_OPERATION(args[1]); exit(2); }
		SIGN = args[2][0] == '+' || args[2][0] == '-';
		if (!SIGN && is_strfmt_int(args[2])) result = i64int(args[2]);
		else if (SIGN && is_strfmt_int(args[2] + 1)) result = i64int(args[2]);
		else result = args[2];
		for (int i = 3; i < n_args; i++) {
			SIGN = args[i][0] == '+' || args[i][0] == '-';
			if (!SIGN && is_strfmt_int(args[i])) OP2 = i64int(args[i]);
			else if (SIGN && is_strfmt_int(args[i] + 1)) OP2 = i64int(args[i]);
			else OP2 = args[i];
			result = mul(result, OP2);
		}
		break;
	case '/':
	case ':':
		if (args[2] == NULL) { display_NOT_VALID_OPERATION(args[1]); exit(2); }
		SIGN = args[2][0] == '+' || args[2][0] == '-';
		if (!SIGN && is_strfmt_int(args[2])) result = i64int(args[2]);
		else if (SIGN && is_strfmt_int(args[2] + 1)) result = i64int(args[2]);
		else result = args[2];
		for (int i = 3; i < n_args; i++) {
			SIGN = args[i][0] == '+' || args[i][0] == '-';
			if (!SIGN && is_strfmt_int(args[i])) OP2 = i64int(args[i]);
			else if (SIGN && is_strfmt_int(args[i] + 1)) OP2 = i64int(args[i]);
			else OP2 = args[i];
			result = div(result, OP2);
		}
		break;
	case '%':
		if (args[2] == NULL) { display_NOT_VALID_OPERATION(args[1]); exit(2); }
		SIGN = args[2][0] == '+' || args[2][0] == '-';
		if (!SIGN && is_strfmt_int(args[2])) result = i64int(args[2]);
		else if (SIGN && is_strfmt_int(args[2] + 1)) result = i64int(args[2]);
		else result = args[2];
		for (int i = 3; i < n_args; i++) {
			SIGN = args[i][0] == '+' || args[i][0] == '-';
			if (!SIGN && is_strfmt_int(args[i])) OP2 = i64int(args[i]);
			else if (SIGN && is_strfmt_int(args[i] + 1)) OP2 = i64int(args[i]);
			else OP2 = args[i];
			result = mod(result, OP2);
		}
		break;
	case '^':
		if (args[2] == NULL) { display_NOT_VALID_OPERATION(args[1]); exit(2); }
		SIGN = args[2][0] == '+' || args[2][0] == '-';
		if (!SIGN && is_strfmt_int(args[2])) result = i64int(args[2]);
		else if (SIGN && is_strfmt_int(args[2] + 1)) result = i64int(args[2]);
		else result = args[2];
		for (int i = 3; i < n_args; i++) {
			SIGN = args[i][0] == '+' || args[i][0] == '-';
			if (!SIGN && is_strfmt_int(args[i])) OP2 = i64int(args[i]);
			else if (SIGN && is_strfmt_int(args[i] + 1)) OP2 = i64int(args[i]);
			else OP2 = args[i];
			result = xy(result, OP2);
		}
		break;
	case '!':
		if (args[2] == NULL) { display_NOT_VALID_OPERATION(args[1]); exit(2); }
		SIGN = args[2][0] == '+' || args[2][0] == '-';
		if (!SIGN && is_strfmt_int(args[2])) result = i64int(args[2]);
		else if (SIGN && is_strfmt_int(args[2] + 1)) result = i64int(args[2]);
		else result = args[2];
		result = fact(result.to_i64());
		break;
	default:
		display_NOT_VALID_OPERATION(args[1]);
		exit(2);
	} //SWITCH END
	if (error()) exit(2); //FAILURE
	print(result, "\n"); //OUTPUT
	return 0;
}

void display_NOT_VALID_OPERATION(char* args) { raise("NOT VALID OPERATION", args); }

void display_help(void) {
	print("--------------------\n");
	print("n7 (Calculator-num7) helps you with arithmetic operations:\n\n");
	print("       addition: n7 + 2 3.5      #5.5\n");
	print("       addition: n7 + 2 3.5 4.5  #10.0\n");
	print("    subtraction: n7 - 2 3.5      #-1.5\n");
	print("    subtraction: n7 - 2 3.5 4.5  #-6.0\n");
	print(" multiplication: n7 x 2 3.5 4.5  #31.5\n");
	print(" multiplication: n7 X 2 3.5 4.5  #31.5\n");
	print(" multiplication: n7 '*' 2 3.5 4  #28.0\n");
	print("       division: n7 / 120 2.0 5  #12.0\n");
	print("       division: n7 / 2.5 3.5    #0.7142857142857142857142857142857142857142\n");
	print("       division: n7 : 2.5 3.5    #0.7142857142857142857142857142857142857142\n");
	print("      remainder: n7 % 17.0 10 4  #3.0\n");
	print("      factorial: n7 ! 5          #120.0\n\n");

	print("       absolute: n7 abs -5.0  #5.0\n\n");

	print("       addition: n7 add 3.0 5.5    #8.5\n");
	print("    subtraction: n7 sub 3.0 5.5    #-2.5\n");
	print(" multiplication: n7 mul 3.0 5.5    #16.5\n");
	print("       division: n7 div 3.0 5.5 6  #0.545454\n");
	print("      remainder: n7 mod 10.0 7.0   #3.0\n");
	print("        inverse: n7 inv 3.0 6      #0.333333\n");
	print("    square root: n7 sqr 2.0 6      #1.414213\n\n");

	print("         square: n7 x2  5.0       #25.0\n");
	print("           cube: n7 x3  5.0       #125.0\n");
	print("          power: n7 xy 10.5 3.0   #1157.625\n");
	print("          power: n7 ^  10.5 3.0   #1157.625\n");
	print("            10y: n7 10y 3.0       #1000.0\n");
	print("             2y: n7 2y 32.0       #4294967296.0\n");
	print("             ey: n7 ey 1.0        #2.7182818284590452353602874713527\n");
	print("      factorial: n7 fact 5        #120.0\n\n");

	print("            10x: n7 10x 5.25         #52.5\n");
	print("           100x: n7 100x 5.25        #525.0\n");
	print("          1000x: n7 1000x 5.25       #5250.0\n");
	print("          10div: n7 10div 5.25       #0.525\n");
	print("         100div: n7 100div 5.25      #0.0525\n");
	print("        1000div: n7 1000div 5.25     #0.00525\n\n");
	print("          shift: n7 shift 5.25  3.0  #5250.0\n");
	print("          shift: n7 shift 5.25 -3.0  #0.00525\n\n");

	print("     percentage: n7 pct 3.725 150.0     #5.5875\n");
	print("    perthousand: n7 pth 2.0 24_000.0    #48.0\n");
	print("       spin-off: n7 spoff 22.0 1_299.0  #1064.75409836065573770491803278688524\n");
	print("        spin-on: n7 rnd $(n7 spon 22.0 1_064.75) #1299.0\n\n");

	print("            rnd: n7 rnd  3.141592654 4  #3.1416\n");
	print("           rndb: n7 rndb 3.141592654 7  #3.1415926\n");
	print("           rndc: n7 rndc 3.141592654    #4.0\n");
	print("           rndf: n7 rndf 3.74           #3.0\n\n");

	print("            sum: n7 sum  3.74 0.26 4 2.0  #10.0\n");
	print("            min: n7 min  3.74 0.26 4 2.0  #0.26\n");
	print("            max: n7 max  3.74 0.26 4 2.0  #4.0\n");
	print("           mean: n7 mean 3.74 0.26 4 2.0  #2.5\n\n");

	print("              e: n7 e   #2.7182818284590452353602874713527\n");
	print("             pi: n7 pi  #3.1415926535897932384626433832795\n");
	print("            exp: n7 exp 200.0e-5    #200.0e-5\n");
	print("     scientific: n7 sci 200.0e-5    #2.0e-3\n");
	print("           bits: n7 bits 10.0       #1010\n");
	print("           bits: n7 bits 65535.0 0  #FFFF\n\n");

	print("             gt: n7 gt -5.0 -4.0  #0\n");
	print("             ge: n7 ge -6.0 -6.0  #1\n");
	print("             lt: n7 lt -5.0  0.0  #1\n");
	print("             le: n7 le -5.0 -5.0  #1\n");
	print("             eq: n7 eq -5.0  0.0  #0\n");
	print("             ne: n7 ne -5.0  0.0  #1\n\n");
	
	print("        is_zero: n7 is_zero   0.0  #1\n");
	print("         is_pos: n7 is_pos    1.0  #1\n");
	print("         is_neg: n7 is_neg   -1.0  #1\n");
	print("        is_even: n7 is_even   3.0  #0\n");
	print("         is_odd: n7 is_odd    2.0  #0\n");
	print("         is_int: n7 is_int   -2.1  #0\n");
	print("       is_prime: n7 is_prime +3.0  #1\n\n");

	print("             if: if [ $(n7 \\> 5 3) -eq 1 ]; then echo \"true\"; else echo \"false\"; fi  #true\n");
	print("          while: a=1.0; while n7 -ge $a 0.0 -q; do echo -n \"$a \"; a=$(n7 - $a 0.1); sleep 0.01; done; echo  #1.0 0.9 0.8 0.7 0.6 0.5 0.4 0.3 0.2 0.1 0.0\n");
}
