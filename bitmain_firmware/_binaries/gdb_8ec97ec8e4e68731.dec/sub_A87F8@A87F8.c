int __fastcall sub_A87F8(_DWORD *a1, int a2, int a3, int a4)
{
  int v7; // r0
  int v8; // r11
  int v9; // r6
  int v10; // r7
  int i; // r4
  int v12; // r5
  int result; // r0

  v7 = sub_A0870(a4);
  v8 = *(_DWORD *)(v7 + 24);
  if ( *(__int16 *)(v8 + 4) > 0 )
  {
    v9 = 0;
    v10 = v7;
    for ( i = 0; *(__int16 *)(v8 + 4) > i; ++i )
    {
      v12 = *(_DWORD *)(v8 + 24) + v9;
      if ( *(_DWORD *)(v12 + 16) )
      {
        if ( sub_A0274(v10, i) )
        {
          result = sub_A87F8(a1, a2, a3 + *(_QWORD *)v12 / 8LL, *(_DWORD *)(v12 + 12));
          if ( result )
            return result;
          v8 = *(_DWORD *)(v10 + 24);
        }
        else
        {
          if ( sub_A0328(v10, i) )
            sub_946E0("Cannot assign this kind of variant record");
          if ( !*a1 )
            return sub_A7978(a2, a3, i, v10);
          --*a1;
        }
      }
      v9 += 24;
    }
  }
  return 0;
}
