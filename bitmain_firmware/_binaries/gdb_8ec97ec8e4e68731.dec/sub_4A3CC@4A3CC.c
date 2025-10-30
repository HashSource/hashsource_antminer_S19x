int __fastcall sub_4A3CC(_BYTE *a1)
{
  int result; // r0
  _DWORD *v3; // r4
  int v4; // r6
  _DWORD *v5; // r2
  int v6; // r0
  int v7; // r0
  int v8; // r7
  int v9; // r11
  const char *v10; // r0
  int v11; // r5
  _DWORD *v12; // r0
  int v13; // r5
  const char *v14; // r0
  int v15; // [sp+4h] [bp-38h]
  const char **v16; // [sp+8h] [bp-34h] BYREF
  _BYTE v17[4]; // [sp+10h] [bp-2Ch] BYREF
  int v18; // [sp+14h] [bp-28h]
  int v19; // [sp+20h] [bp-1Ch]

  result = sub_B894C();
  v15 = result;
  if ( a1 && *a1 )
  {
    result = sub_14CC00(a1);
    v4 = result;
    v3 = (_DWORD *)dword_4726BC;
    if ( !dword_4726BC )
    {
LABEL_23:
      if ( v4 > 0 )
        return sub_259F10("No checkpoint number %d.\n", v4);
      return sub_259F10("No checkpoints.\n");
    }
  }
  else
  {
    v3 = (_DWORD *)dword_4726BC;
    if ( !dword_4726BC )
      return sub_259F10("No checkpoints.\n");
    v4 = -1;
  }
  v5 = 0;
  do
  {
    if ( v4 <= 0 || v3[7] == v4 )
    {
      if ( sub_98F78(v3 + 1, &dword_4878EC) )
      {
        v6 = sub_259F10("* ");
        v7 = sub_1DDBBC(v6);
        v8 = sub_1DFB3C(v7);
      }
      else
      {
        sub_259F10("  ");
        v8 = sub_1DFB3C(v3[8]);
      }
      v9 = v3[7];
      v10 = (const char *)sub_23095C(v3[1], v3[2], v3[3]);
      sub_259F10("%d %s", v9, v10);
      if ( !v3[7] )
        sub_259F10(" (main process)");
      sub_259F10(" at ");
      v11 = sub_25AC8C(v15, v8);
      v12 = (_DWORD *)sub_242F8C(v11);
      sub_25A6BC(v11, *v12);
      sub_21DEAC(v17, v8);
      v13 = v19;
      if ( v18 )
      {
        v14 = (const char *)((int (*)(void))loc_2043D4)();
        sub_259F10(", file %s", v14);
        if ( !v13 )
        {
LABEL_12:
          result = sub_25A4C8(10);
          v5 = v3;
          goto LABEL_13;
        }
      }
      else if ( !v19 )
      {
        sub_1B240C(&v16, v8);
        if ( v16 )
          sub_259F10(", <%s>", *v16);
        goto LABEL_12;
      }
      sub_259F10(", line %d", v13);
      goto LABEL_12;
    }
LABEL_13:
    v3 = (_DWORD *)*v3;
  }
  while ( v3 );
  if ( !v5 )
    goto LABEL_23;
  return result;
}
