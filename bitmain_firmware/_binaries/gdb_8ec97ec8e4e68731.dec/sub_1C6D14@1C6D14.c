int __fastcall sub_1C6D14(int result, int a2, int a3, const char *a4)
{
  if ( a3 )
    sub_946E0("Size letters are meaningless in \"%s\" command.", a4);
  if ( result != 1 )
    sub_946E0("Item count other than 1 is meaningless in \"%s\" command.", a4);
  if ( a2 == 105 )
    sub_946E0("Format letter \"%c\" is meaningless in \"%s\" command.", 105, a4);
  return result;
}
