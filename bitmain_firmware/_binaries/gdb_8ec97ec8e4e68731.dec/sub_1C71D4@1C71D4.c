int __fastcall sub_1C71D4(int a1, unsigned int a2, int a3, int a4, int a5)
{
  void *v9; // r7
  int v10; // r0
  int v11; // r0
  int v13; // [sp+14h] [bp-18h] BYREF
  const char *v14; // [sp+18h] [bp-14h] BYREF
  int v15; // [sp+1Ch] [bp-10h] BYREF
  int v16; // [sp+20h] [bp-Ch] BYREF
  int v17; // [sp+24h] [bp-8h] BYREF

  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v9 = sub_9253C((int)sub_2589B8, (int)&v13);
  sub_9253C((int)sub_2589B8, (int)&v14);
  if ( sub_1C6ECC(a1, a2, a4, &v13, &v16, &v14, &v17, &v15) )
  {
    sub_92620(v9);
    return 0;
  }
  else
  {
    sub_25A6BC(a5, a3);
    if ( v15 )
      LOWORD(v10) = -17820;
    else
      LOWORD(v10) = 20388;
    if ( v15 )
      HIWORD(v10) = 60;
    else
      HIWORD(v10) = 54;
    sub_25A6BC(v10, a3);
    sub_25A6BC(v13, a3);
    if ( v16 )
      sub_25A418(a3, "+%u", v16);
    if ( dword_487CF4 && v14 )
    {
      if ( v17 == -1 )
        sub_25A418(a3, " in %s", v14);
      else
        sub_25A418(a3, " at %s:%d", v14, v17);
    }
    if ( v15 )
      LOWORD(v11) = -17800;
    else
      LOWORD(v11) = 15672;
    if ( v15 )
      HIWORD(v11) = 60;
    else
      HIWORD(v11) = 67;
    sub_25A6BC(v11, a3);
    sub_92620(v9);
    return 1;
  }
}
