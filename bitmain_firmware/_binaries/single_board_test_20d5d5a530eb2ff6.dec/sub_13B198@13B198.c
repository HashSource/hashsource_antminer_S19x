int __fastcall sub_13B198(int a1, int a2)
{
  int v4; // r0
  int result; // r0

  v4 = dword_6E1C7C;
  if ( !dword_6E1C7C )
  {
    v4 = sub_17A9F8();
    dword_6E1C7C = v4;
  }
  result = (*(int (__fastcall **)(int))(v4 + 8))(a1);
  *(_DWORD *)(a1 + 8) = a2;
  return result;
}
