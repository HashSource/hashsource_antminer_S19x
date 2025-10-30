int __fastcall sub_180104(int a1, int a2)
{
  int result; // r0

  if ( !a2 )
    return sub_188128();
  result = (*(int (**)(void))(a1 + 344))();
  if ( !result )
    sub_946E0("Asynchronous execution not supported on this target.");
  return result;
}
