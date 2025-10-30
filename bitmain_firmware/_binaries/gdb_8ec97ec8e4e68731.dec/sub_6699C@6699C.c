int __fastcall sub_6699C(int a1, int a2, int a3)
{
  int v3; // r5
  int v6; // r10
  int v7; // r0
  int v8; // r0
  int v10; // [sp+8h] [bp-Ch] BYREF
  int v11; // [sp+Ch] [bp-8h] BYREF

  v3 = 0;
  v6 = 0;
  v10 = 0;
  while ( 1 )
  {
    v7 = sub_602EC("-trace-save", a3, a2, (int)&off_35B474, &v10, &v11);
    if ( v7 < 0 )
      break;
    if ( v7 )
    {
      if ( v7 == 1 )
        v3 = 1;
    }
    else
    {
      v6 = 1;
    }
  }
  if ( a3 - v10 != 1 )
    sub_946E0("Exactly one argument required (file in which to save trace data)");
  v8 = *(_DWORD *)(a2 + 4 * v10);
  if ( v3 )
    return sub_245BA0(v8, v6);
  else
    return sub_245B5C(v8, v6);
}
