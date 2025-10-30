int __fastcall sub_1B0168(int a1, int a2, const char **a3, int a4)
{
  int result; // r0
  int v8; // r4

  if ( sub_33CAA0((int)(a3 + 1), "blocksize") )
    return sub_273C78(a1, "Unknown property \"%s\"", a3[1]);
  v8 = *((_DWORD *)*a3 + 1);
  result = sub_274220(a1, a4);
  *(_DWORD *)(v8 - 4) = result;
  return result;
}
