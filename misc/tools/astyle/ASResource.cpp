// ASResource.cpp
// Copyright (c) 2016 by Jim Pattee <jimp03@email.com>.
// This code is licensed under the MIT License.
// License.txt describes the conditions under which this software may be distributed.

//-----------------------------------------------------------------------------
// headers
//-----------------------------------------------------------------------------

#include "astyle.h"
#include <algorithm>

//-----------------------------------------------------------------------------
// astyle namespace
//-----------------------------------------------------------------------------

namespace astyle {
//
const string ASResource::AS_IF = string("if");
const string ASResource::AS_ELSE = string("else");
const string ASResource::AS_FOR = string("for");
const string ASResource::AS_DO = string("do");
const string ASResource::AS_WHILE = string("while");
const string ASResource::AS_SWITCH = string("switch");
const string ASResource::AS_CASE = string("case");
const string ASResource::AS_DEFAULT = string("default");
const string ASResource::AS_CLASS = string("class");
const string ASResource::AS_VOLATILE = string("volatile");
const string ASResource::AS_INTERRUPT = string("interrupt");
const string ASResource::AS_NOEXCEPT = string("noexcept");
const string ASResource::AS_AUTORELEASEPOOL = string("autoreleasepool");
const string ASResource::AS_STRUCT = string("struct");
const string ASResource::AS_UNION = string("union");
const string ASResource::AS_INTERFACE = string("interface");
const string ASResource::AS_NAMESPACE = string("namespace");
const string ASResource::AS_END = string("end");
const string ASResource::AS_SELECTOR = string("selector");
const string ASResource::AS_EXTERN = string("extern");
const string ASResource::AS_ENUM = string("enum");
const string ASResource::AS_PUBLIC = string("public");
const string ASResource::AS_PROTECTED = string("protected");
const string ASResource::AS_PRIVATE = string("private");
const string ASResource::AS_STATIC = string("static");
const string ASResource::AS_SYNCHRONIZED = string("synchronized");
const string ASResource::AS_OPERATOR = string("operator");
const string ASResource::AS_TEMPLATE = string("template");
const string ASResource::AS_TRY = string("try");
const string ASResource::AS_CATCH = string("catch");
const string ASResource::AS_THROW = string("throw");
const string ASResource::AS_FINALLY = string("finally");
const string ASResource::AS_USING = string("using");
const string ASResource::_AS_TRY = string("__try");
const string ASResource::_AS_FINALLY = string("__finally");
const string ASResource::_AS_EXCEPT = string("__except");
const string ASResource::AS_THROWS = string("throws");
const string ASResource::AS_CONST = string("const");
const string ASResource::AS_SEALED = string("sealed");
const string ASResource::AS_OVERRIDE = string("override");
const string ASResource::AS_WHERE = string("where");
const string ASResource::AS_LET = string("let");
const string ASResource::AS_NEW = string("new");

const string ASResource::AS_ASM = string("asm");
const string ASResource::AS__ASM__ = string("__asm__");
const string ASResource::AS_MS_ASM = string("_asm");
const string ASResource::AS_MS__ASM = string("__asm");

const string ASResource::AS_BAR_DEFINE = string("#define");
const string ASResource::AS_BAR_INCLUDE = string("#include");
const string ASResource::AS_BAR_IF = string("#if");
const string ASResource::AS_BAR_EL = string("#el");
const string ASResource::AS_BAR_ENDIF = string("#endif");

const string ASResource::AS_OPEN_BRACKET = string("{");
const string ASResource::AS_CLOSE_BRACKET = string("}");
const string ASResource::AS_OPEN_LINE_COMMENT = string("//");
const string ASResource::AS_OPEN_COMMENT = string("/*");
const string ASResource::AS_CLOSE_COMMENT = string("*/");

const string ASResource::AS_ASSIGN = string("=");
const string ASResource::AS_PLUS_ASSIGN = string("+=");
const string ASResource::AS_MINUS_ASSIGN = string("-=");
const string ASResource::AS_MULT_ASSIGN = string("*=");
const string ASResource::AS_DIV_ASSIGN = string("/=");
const string ASResource::AS_MOD_ASSIGN = string("%=");
const string ASResource::AS_OR_ASSIGN = string("|=");
const string ASResource::AS_AND_ASSIGN = string("&=");
const string ASResource::AS_XOR_ASSIGN = string("^=");
const string ASResource::AS_GR_GR_ASSIGN = string(">>=");
const string ASResource::AS_LS_LS_ASSIGN = string("<<=");
const string ASResource::AS_GR_GR_GR_ASSIGN = string(">>>=");
const string ASResource::AS_LS_LS_LS_ASSIGN = string("<<<=");
const string ASResource::AS_GCC_MIN_ASSIGN = string("<?");
const string ASResource::AS_GCC_MAX_ASSIGN = string(">?");

const string ASResource::AS_RETURN = string("return");
const string ASResource::AS_CIN = string("cin");
const string ASResource::AS_COUT = string("cout");
const string ASResource::AS_CERR = string("cerr");

const string ASResource::AS_EQUAL = string("==");
const string ASResource::AS_PLUS_PLUS = string("++");
const string ASResource::AS_MINUS_MINUS = string("--");
const string ASResource::AS_NOT_EQUAL = string("!=");
const string ASResource::AS_GR_EQUAL = string(">=");
const string ASResource::AS_GR_GR = string(">>");
const string ASResource::AS_GR_GR_GR = string(">>>");
const string ASResource::AS_LS_EQUAL = string("<=");
const string ASResource::AS_LS_LS = string("<<");
const string ASResource::AS_LS_LS_LS = string("<<<");
const string ASResource::AS_QUESTION_QUESTION = string("??");
const string ASResource::AS_LAMBDA = string("=>");            // C# lambda expression arrow
const string ASResource::AS_ARROW = string("->");
const string ASResource::AS_AND = string("&&");
const string ASResource::AS_OR = string("||");
const string ASResource::AS_SCOPE_RESOLUTION = string("::");

const string ASResource::AS_PLUS = string("+");
const string ASResource::AS_MINUS = string("-");
const string ASResource::AS_MULT = string("*");
const string ASResource::AS_DIV = string("/");
const string ASResource::AS_MOD = string("%");
const string ASResource::AS_GR = string(">");
const string ASResource::AS_LS = string("<");
const string ASResource::AS_NOT = string("!");
const string ASResource::AS_BIT_OR = string("|");
const string ASResource::AS_BIT_AND = string("&");
const string ASResource::AS_BIT_NOT = string("~");
const string ASResource::AS_BIT_XOR = string("^");
const string ASResource::AS_QUESTION = string("?");
const string ASResource::AS_COLON = string(":");
const string ASResource::AS_COMMA = string(",");
const string ASResource::AS_SEMICOLON = string(";");

const string ASResource::AS_QFOREACH = string("Q_FOREACH");
const string ASResource::AS_QFOREVER = string("Q_FOREVER");
const string ASResource::AS_FOREVER = string("forever");
const string ASResource::AS_FOREACH = string("foreach");
const string ASResource::AS_LOCK = string("lock");
const string ASResource::AS_UNSAFE = string("unsafe");
const string ASResource::AS_FIXED = string("fixed");
const string ASResource::AS_GET = string("get");
const string ASResource::AS_SET = string("set");
const string ASResource::AS_ADD = string("add");
const string ASResource::AS_REMOVE = string("remove");
const string ASResource::AS_DELEGATE = string("delegate");
const string ASResource::AS_UNCHECKED = string("unchecked");

const string ASResource::AS_CONST_CAST = string("const_cast");
const string ASResource::AS_DYNAMIC_CAST = string("dynamic_cast");
const string ASResource::AS_REINTERPRET_CAST = string("reinterpret_cast");
const string ASResource::AS_STATIC_CAST = string("static_cast");

const string ASResource::AS_NS_DURING = string("NS_DURING");
const string ASResource::AS_NS_HANDLER = string("NS_HANDLER");

/**
 * Sort comparison function.
 * Compares the length of the value of pointers in the vectors.
 * The LONGEST strings will be first in the vector.
 *
 * @param a and b, the string pointers to be compared.
 */
bool sortOnLength(const string* a, const string* b)
{
	return (*a).length() > (*b).length();
}

/**
 * Sort comparison function.
 * Compares the value of pointers in the vectors.
 *
 * @param a and b, the string pointers to be compared.
 */
bool sortOnName(const string* a, const string* b)
{
	return *a < *b;
}

/**
 * Build the vector of assignment operators.
 * Used by BOTH ASFormatter.cpp and ASBeautifier.cpp
 *
 * @param assignmentOperators   a reference to the vector to be built.
 */
void ASResource::buildAssignmentOperators(vector<const string*>* assignmentOperators)
{
	assignmentOperators->push_back(&AS_ASSIGN);
	assignmentOperators->push_back(&AS_PLUS_ASSIGN);
	assignmentOperators->push_back(&AS_MINUS_ASSIGN);
	assignmentOperators->push_back(&AS_MULT_ASSIGN);
	assignmentOperators->push_back(&AS_DIV_ASSIGN);
	assignmentOperators->push_back(&AS_MOD_ASSIGN);
	assignmentOperators->push_back(&AS_OR_ASSIGN);
	assignmentOperators->push_back(&AS_AND_ASSIGN);
	assignmentOperators->push_back(&AS_XOR_ASSIGN);

	// Java
	assignmentOperators->push_back(&AS_GR_GR_GR_ASSIGN);
	assignmentOperators->push_back(&AS_GR_GR_ASSIGN);
	assignmentOperators->push_back(&AS_LS_LS_ASSIGN);

	// Unknown
	assignmentOperators->push_back(&AS_LS_LS_LS_ASSIGN);

	sort(assignmentOperators->begin(), assignmentOperators->end(), sortOnLength);
}

/**
 * Build the vector of C++ cast operators.
 * Used by ONLY ASFormatter.cpp
 *
 * @param castOperators     a reference to the vector to be built.
 */
void ASResource::buildCastOperators(vector<const string*>* castOperators)
{
	castOperators->push_back(&AS_CONST_CAST);
	castOperators->push_back(&AS_DYNAMIC_CAST);
	castOperators->push_back(&AS_REINTERPRET_CAST);
	castOperators->push_back(&AS_STATIC_CAST);
}

/**
 * Build the vector of header words.
 * Used by BOTH ASFormatter.cpp and ASBeautifier.cpp
 *
 * @param headers       a reference to the vector to be built.
 */
void ASResource::buildHeaders(vector<const string*>* headers, int fileType, bool beautifier)
{
	headers->push_back(&AS_IF);
	headers->push_back(&AS_ELSE);
	headers->push_back(&AS_FOR);
	headers->push_back(&AS_WHILE);
	headers->push_back(&AS_DO);
	headers->push_back(&AS_SWITCH);
	headers->push_back(&AS_CASE);
	headers->push_back(&AS_DEFAULT);
	headers->push_back(&AS_TRY);
	headers->push_back(&AS_CATCH);
	headers->push_back(&AS_QFOREACH);		// QT
	headers->push_back(&AS_QFOREVER);		// QT
	headers->push_back(&AS_FOREACH);		// QT & C#
	headers->push_back(&AS_FOREVER);		// Qt & Boost

	if (fileType == C_TYPE)
	{
		headers->push_back(&_AS_TRY);		// __try
		headers->push_back(&_AS_FINALLY);	// __finally
		headers->push_back(&_AS_EXCEPT);	// __except
	}
	if (fileType == JAVA_TYPE)
	{
		headers->push_back(&AS_FINALLY);
		headers->push_back(&AS_SYNCHRONIZED);
	}

	if (fileType == SHARP_TYPE)
	{
		headers->push_back(&AS_FINALLY);
		headers->push_back(&AS_LOCK);
		headers->push_back(&AS_FIXED);
		headers->push_back(&AS_GET);
		headers->push_back(&AS_SET);
		headers->push_back(&AS_ADD);
		headers->push_back(&AS_REMOVE);
		headers->push_back(&AS_USING);
	}

	if (beautifier)
	{
		if (fileType == C_TYPE)
		{
			headers->push_back(&AS_TEMPLATE);
		}

		if (fileType == JAVA_TYPE)
		{
			headers->push_back(&AS_STATIC);         // for static constructor
		}
	}
	sort(headers->begin(), headers->end(), sortOnName);
}

/**
 * Build the vector of indentable headers.
 * Used by ONLY ASBeautifier.cpp
 *
 * @param indentableHeaders     a reference to the vector to be built.
 */
void ASResource::buildIndentableHeaders(vector<const string*>* indentableHeaders)
{
	indentableHeaders->push_back(&AS_RETURN);

	sort(indentableHeaders->begin(), indentableHeaders->end(), sortOnName);
}

/**
* Build the vector of indentable macros pairs.
* Initialized by ASFormatter, used by ONLY ASEnhancer.cpp
*
* @param indentableMacros       a reference to the vector to be built.
*/
void ASResource::buildIndentableMacros(vector<const pair<const string, const string>* >* indentableMacros)
{
	typedef pair<const string, const string> macro_pair;

	// the pairs must be retained in memory
	static const macro_pair macros[] =
	{
		// wxWidgets
		macro_pair("BEGIN_EVENT_TABLE", "END_EVENT_TABLE"),
		macro_pair("wxBEGIN_EVENT_TABLE", "wxEND_EVENT_TABLE"),
		// MFC
		macro_pair("BEGIN_DISPATCH_MAP", "END_DISPATCH_MAP"),
		macro_pair("BEGIN_EVENT_MAP", "END_EVENT_MAP"),
		macro_pair("BEGIN_MESSAGE_MAP", "END_MESSAGE_MAP"),
		macro_pair("BEGIN_PROPPAGEIDS", "END_PROPPAGEIDS"),
	};

	size_t elements = sizeof(macros) / sizeof(macros[0]);
	for (size_t i = 0; i < elements; i++)
		indentableMacros->push_back(&macros[i]);
}

/**
 * Build the vector of non-assignment operators.
 * Used by ONLY ASBeautifier.cpp
 *
 * @param nonAssignmentOperators       a reference to the vector to be built.
 */
void ASResource::buildNonAssignmentOperators(vector<const string*>* nonAssignmentOperators)
{
	nonAssignmentOperators->push_back(&AS_EQUAL);
	nonAssignmentOperators->push_back(&AS_PLUS_PLUS);
	nonAssignmentOperators->push_back(&AS_MINUS_MINUS);
	nonAssignmentOperators->push_back(&AS_NOT_EQUAL);
	nonAssignmentOperators->push_back(&AS_GR_EQUAL);
	nonAssignmentOperators->push_back(&AS_GR_GR_GR);
	nonAssignmentOperators->push_back(&AS_GR_GR);
	nonAssignmentOperators->push_back(&AS_LS_EQUAL);
	nonAssignmentOperators->push_back(&AS_LS_LS_LS);
	nonAssignmentOperators->push_back(&AS_LS_LS);
	nonAssignmentOperators->push_back(&AS_ARROW);
	nonAssignmentOperators->push_back(&AS_AND);
	nonAssignmentOperators->push_back(&AS_OR);
	nonAssignmentOperators->push_back(&AS_LAMBDA);

	sort(nonAssignmentOperators->begin(), nonAssignmentOperators->end(), sortOnLength);
}

/**
 * Build the vector of header non-paren headers.
 * Used by BOTH ASFormatter.cpp and ASBeautifier.cpp.
 * NOTE: Non-paren headers should also be included in the headers vector.
 *
 * @param nonParenHeaders       a reference to the vector to be built.
 */
void ASResource::buildNonParenHeaders(vector<const string*>* nonParenHeaders, int fileType, bool beautifier)
{
	nonParenHeaders->push_back(&AS_ELSE);
	nonParenHeaders->push_back(&AS_DO);
	nonParenHeaders->push_back(&AS_TRY);
	nonParenHeaders->push_back(&AS_CATCH);		// can be paren or non-paren
	nonParenHeaders->push_back(&AS_CASE);		// can be paren or non-paren
	nonParenHeaders->push_back(&AS_DEFAULT);
	nonParenHeaders->push_back(&AS_QFOREVER);	// QT
	nonParenHeaders->push_back(&AS_FOREVER);	// Boost

	if (fileType == C_TYPE)
	{
		nonParenHeaders->push_back(&_AS_TRY);		// __try
		nonParenHeaders->push_back(&_AS_FINALLY);	// __finally
	}
	if (fileType == JAVA_TYPE)
	{
		nonParenHeaders->push_back(&AS_FINALLY);
	}

	if (fileType == SHARP_TYPE)
	{
		nonParenHeaders->push_back(&AS_FINALLY);
		nonParenHeaders->push_back(&AS_GET);
		nonParenHeaders->push_back(&AS_SET);
		nonParenHeaders->push_back(&AS_ADD);
		nonParenHeaders->push_back(&AS_REMOVE);
	}

	if (beautifier)
	{
		if (fileType == C_TYPE)
		{
			nonParenHeaders->push_back(&AS_TEMPLATE);
		}
		if (fileType == JAVA_TYPE)
		{
			nonParenHeaders->push_back(&AS_STATIC);
		}
	}
	sort(nonParenHeaders->begin(), nonParenHeaders->end(), sortOnName);
}

/**
 * Build the vector of operators.
 * Used by ONLY ASFormatter.cpp
 *
 * @param operators             a reference to the vector to be built.
 */
void ASResource::buildOperators(vector<const string*>* operators, int fileType)
{
	operators->push_back(&AS_PLUS_ASSIGN);
	operators->push_back(&AS_MINUS_ASSIGN);
	operators->push_back(&AS_MULT_ASSIGN);
	operators->push_back(&AS_DIV_ASSIGN);
	operators->push_back(&AS_MOD_ASSIGN);
	operators->push_back(&AS_OR_ASSIGN);
	operators->push_back(&AS_AND_ASSIGN);
	operators->push_back(&AS_XOR_ASSIGN);
	operators->push_back(&AS_EQUAL);
	operators->push_back(&AS_PLUS_PLUS);
	operators->push_back(&AS_MINUS_MINUS);
	operators->push_back(&AS_NOT_EQUAL);
	operators->push_back(&AS_GR_EQUAL);
	operators->push_back(&AS_GR_GR_GR_ASSIGN);
	operators->push_back(&AS_GR_GR_ASSIGN);
	operators->push_back(&AS_GR_GR_GR);
	operators->push_back(&AS_GR_GR);
	operators->push_back(&AS_LS_EQUAL);
	operators->push_back(&AS_LS_LS_LS_ASSIGN);
	operators->push_back(&AS_LS_LS_ASSIGN);
	operators->push_back(&AS_LS_LS_LS);
	operators->push_back(&AS_LS_LS);
	operators->push_back(&AS_QUESTION_QUESTION);
	operators->push_back(&AS_LAMBDA);
	operators->push_back(&AS_ARROW);
	operators->push_back(&AS_AND);
	operators->push_back(&AS_OR);
	operators->push_back(&AS_SCOPE_RESOLUTION);
	operators->push_back(&AS_PLUS);
	operators->push_back(&AS_MINUS);
	operators->push_back(&AS_MULT);
	operators->push_back(&AS_DIV);
	operators->push_back(&AS_MOD);
	operators->push_back(&AS_QUESTION);
	operators->push_back(&AS_COLON);
	operators->push_back(&AS_ASSIGN);
	operators->push_back(&AS_LS);
	operators->push_back(&AS_GR);
	operators->push_back(&AS_NOT);
	operators->push_back(&AS_BIT_OR);
	operators->push_back(&AS_BIT_AND);
	operators->push_back(&AS_BIT_NOT);
	operators->push_back(&AS_BIT_XOR);
	if (fileType == C_TYPE)
	{
		operators->push_back(&AS_GCC_MIN_ASSIGN);
		operators->push_back(&AS_GCC_MAX_ASSIGN);
	}
	sort(operators->begin(), operators->end(), sortOnLength);
}

/**
 * Build the vector of pre-block statements.
 * Used by ONLY ASBeautifier.cpp
 * NOTE: Cannot be both a header and a preBlockStatement.
 *
 * @param preBlockStatements        a reference to the vector to be built.
 */
void ASResource::buildPreBlockStatements(vector<const string*>* preBlockStatements, int fileType)
{
	preBlockStatements->push_back(&AS_CLASS);
	if (fileType == C_TYPE)
	{
		preBlockStatements->push_back(&AS_STRUCT);
		preBlockStatements->push_back(&AS_UNION);
		preBlockStatements->push_back(&AS_NAMESPACE);
	}
	if (fileType == JAVA_TYPE)
	{
		preBlockStatements->push_back(&AS_INTERFACE);
		preBlockStatements->push_back(&AS_THROWS);
	}
	if (fileType == SHARP_TYPE)
	{
		preBlockStatements->push_back(&AS_INTERFACE);
		preBlockStatements->push_back(&AS_NAMESPACE);
		preBlockStatements->push_back(&AS_WHERE);
		preBlockStatements->push_back(&AS_STRUCT);
	}
	sort(preBlockStatements->begin(), preBlockStatements->end(), sortOnName);
}

/**
 * Build the vector of pre-command headers.
 * Used by BOTH ASFormatter.cpp and ASBeautifier.cpp.
 * NOTE: Cannot be both a header and a preCommandHeader.
 *
 * A preCommandHeader is in a function definition between
 * the closing paren and the opening bracket.
 * e.g. in "void foo() const {}", "const" is a preCommandHeader.
 */
void ASResource::buildPreCommandHeaders(vector<const string*>* preCommandHeaders, int fileType)
{
	if (fileType == C_TYPE)
	{
		preCommandHeaders->push_back(&AS_CONST);
		preCommandHeaders->push_back(&AS_VOLATILE);
		preCommandHeaders->push_back(&AS_INTERRUPT);
		preCommandHeaders->push_back(&AS_NOEXCEPT);
		preCommandHeaders->push_back(&AS_OVERRIDE);
		preCommandHeaders->push_back(&AS_SEALED);			// Visual C only
		preCommandHeaders->push_back(&AS_AUTORELEASEPOOL);	// Obj-C only
	}

	if (fileType == JAVA_TYPE)
	{
		preCommandHeaders->push_back(&AS_THROWS);
	}

	if (fileType == SHARP_TYPE)
	{
		preCommandHeaders->push_back(&AS_WHERE);
	}

	sort(preCommandHeaders->begin(), preCommandHeaders->end(), sortOnName);
}

/**
 * Build the vector of pre-definition headers.
 * Used by ONLY ASFormatter.cpp
 * NOTE: Do NOT add 'enum' here. It is an array type bracket.
 * NOTE: Do NOT add 'extern' here. Do not want an extra indent.
 *
 * @param preDefinitionHeaders      a reference to the vector to be built.
 */
void ASResource::buildPreDefinitionHeaders(vector<const string*>* preDefinitionHeaders, int fileType)
{
	preDefinitionHeaders->push_back(&AS_CLASS);
	if (fileType == C_TYPE)
	{
		preDefinitionHeaders->push_back(&AS_STRUCT);
		preDefinitionHeaders->push_back(&AS_UNION);
		preDefinitionHeaders->push_back(&AS_NAMESPACE);
	}
	if (fileType == JAVA_TYPE)
	{
		preDefinitionHeaders->push_back(&AS_INTERFACE);
	}
	if (fileType == SHARP_TYPE)
	{
		preDefinitionHeaders->push_back(&AS_STRUCT);
		preDefinitionHeaders->push_back(&AS_INTERFACE);
		preDefinitionHeaders->push_back(&AS_NAMESPACE);
	}
	sort(preDefinitionHeaders->begin(), preDefinitionHeaders->end(), sortOnName);
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                             ASBase Functions
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

// check if a specific line position contains a keyword.
bool ASBase::findKeyword(const string& line, int i, const string& keyword) const
{
	assert(isCharPotentialHeader(line, i));
	// check the word
	const size_t keywordLength = keyword.length();
	const size_t wordEnd = i + keywordLength;
	if (wordEnd > line.length())
		return false;
	if (line.compare(i, keywordLength, keyword) != 0)
		return false;
	// check that this is not part of a longer word
	if (wordEnd == line.length())
		return true;
	if (isLegalNameChar(line[wordEnd]))
		return false;
	// is not a keyword if part of a definition
	const char peekChar = peekNextChar(line, (int)wordEnd - 1);
	if (peekChar == ',' || peekChar == ')')
		return false;
	return true;
}

// get the current word on a line
// index must point to the beginning of the word
string ASBase::getCurrentWord(const string& line, size_t index) const
{
	assert(isCharPotentialHeader(line, index));
	size_t lineLength = line.length();
	size_t i;
	for (i = index; i < lineLength; i++)
	{
		if (!isLegalNameChar(line[i]))
			break;
	}
	return line.substr(index, i - index);
}

// check if a specific character can be used in a legal variable/method/class name
bool ASBase::isLegalNameChar(char ch) const
{
	if (isWhiteSpace(ch)) return false;
	if ((unsigned) ch > 127) return false;
	return (isalnum((unsigned char) ch)
	        || ch == '.' || ch == '_'
	        || (isJavaStyle() && ch == '$')
	        || (isSharpStyle() && ch == '@'));  // may be used as a prefix
}

// check if a specific character can be part of a header
bool ASBase::isCharPotentialHeader(const string& line, size_t i) const
{
	assert(!isWhiteSpace(line[i]));
	char prevCh = ' ';
	if (i > 0) prevCh = line[i - 1];
	if (!isLegalNameChar(prevCh) && isLegalNameChar(line[i]))
		return true;
	return false;
}

// check if a specific character can be part of an operator
bool ASBase::isCharPotentialOperator(char ch) const
{
	assert(!isWhiteSpace(ch));
	if ((unsigned) ch > 127) return false;
	return (ispunct((unsigned char) ch)
	        && ch != '{' && ch != '}'
	        && ch != '(' && ch != ')'
	        && ch != '[' && ch != ']'
	        && ch != ';' && ch != ','
	        && ch != '#' && ch != '\\'
	        && ch != '\'' && ch != '\"');
}

// check if a specific character is a digit
// NOTE: Visual C isdigit() gives assert error if char > 256
bool ASBase::isDigit(char ch) const
{
	return (ch >= '0' && ch <= '9');
}

// check if a specific character is a digit separator
bool ASBase::isDigitSeparator(const string& line, int i) const
{
	assert(line[i] == '\'');
	// casting to (unsigned char) eliminates negative characters
	// will get a "Debug Assertion Failed" if not cast
	bool foundDigitSeparator = i > 0
	                           && isxdigit((unsigned char) line[i - 1])
	                           && i < (int) line.length() - 1
	                           && isxdigit((unsigned char) line[i + 1]);
	return foundDigitSeparator;
}

// peek at the next unread character.
char ASBase::peekNextChar(const string& line, int i) const
{
	char ch = ' ';
	size_t peekNum = line.find_first_not_of(" \t", i + 1);
	if (peekNum == string::npos)
		return ch;
	ch = line[peekNum];
	return ch;
}

}   // end namespace astyle
