int __fastcall sub_40820(int a1, int a2)
{
  bool v3; // zf
  int *v4; // r3
  int *v5; // r2
  int *v6; // r4
  int *v7; // r3
  int v9; // [sp+4h] [bp-Ch]
  int v10; // [sp+Ch] [bp-4h]

  v3 = (*(_WORD *)(a1 + 8) & 0x40) == 0;
  --dword_BDB54;
  if ( !v3 )
  {
    v9 = a2;
    sub_407A4();
    a2 = v9;
  }
  if ( a2 )
    v4 = &restrictlist6;
  else
    v4 = &restrictlist4;
  v5 = (int *)*v4;
  if ( *v4 == a1 )
  {
    v6 = (int *)a1;
  }
  else
  {
    if ( !v5 || (v6 = (int *)*v5) == 0 )
LABEL_20:
      sub_6FC54("ntp_restrict.c", 306, 2, "unlinked == res");
    while ( (int *)a1 != v6 )
    {
      v5 = v6;
      if ( !*v6 )
        goto LABEL_20;
      v6 = (int *)*v6;
    }
    v4 = v5;
  }
  *v4 = *v6;
  if ( v6 != (int *)a1 )
    goto LABEL_20;
  if ( a2 )
  {
    memset(v6, 0, 0x34u);
    v7 = &dword_BDB4C;
  }
  else
  {
    memset(v6, 0, 0x1Cu);
    v7 = &dword_BDB50;
  }
  *v6 = *v7;
  *v7 = (int)v6;
  return v10;
}
