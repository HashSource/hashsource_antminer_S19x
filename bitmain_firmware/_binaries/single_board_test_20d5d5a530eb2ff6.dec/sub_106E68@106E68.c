int __fastcall sub_106E68(int a1, int a2)
{
  int v4; // r6
  _DWORD *v5; // r0
  int result; // r0
  int v7; // r4
  int v8; // [sp+4h] [bp-4h] BYREF

  v4 = sub_DB984(a1);
  v5 = (_DWORD *)sub_DB988(a1);
  result = sub_D9FE8(v5, &v8);
  v7 = result;
  if ( result )
  {
    if ( v8 == 16 )
    {
      sub_D8DA4(a2, 256);
      sub_D8DA0(a2, (int)sub_106EC4);
      return sub_167DC8(v4 + 16, v7, 0);
    }
    else
    {
      return 0;
    }
  }
  return result;
}
