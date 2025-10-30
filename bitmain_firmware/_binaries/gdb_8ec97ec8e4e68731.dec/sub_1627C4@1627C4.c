int *__fastcall sub_1627C4(int *result)
{
  int v1; // r4
  _DWORD *v2; // r5
  int v3; // r7
  char *v4; // r0
  _DWORD *v5; // r5
  __int64 v6; // r0
  char v7; // r2
  __int64 v8; // r2
  _QWORD v9[13]; // [sp+8h] [bp-6Ch] BYREF

  v1 = (int)result;
  if ( result )
  {
    v2 = (_DWORD *)result[41];
    if ( dword_487778 )
    {
      v3 = *(_DWORD *)sub_242FC8(result);
      v4 = sub_98EEC(v1);
      result = (int *)sub_2594B0(v3, "Increase reference count on bfd %s (%s)\n", v4, *(const char **)v1);
      if ( v2 )
        goto LABEL_4;
    }
    else if ( v2 )
    {
LABEL_4:
      ++*v2;
      return result;
    }
    *(_DWORD *)(v1 + 40) |= 0x100000u;
    v5 = sub_9836C(0x40u);
    *v5 = 1;
    v5[1] = sub_2A8B88(v1);
    v6 = sub_2A8BE8(v1);
    v7 = *((_BYTE *)v5 + 32);
    *((_QWORD *)v5 + 1) = v6;
    v5[9] = 0;
    v5[10] = 0;
    v5[11] = 0;
    *((_BYTE *)v5 + 32) = v7 & 0xF8;
    v5[12] = 0;
    v5[13] = 0;
    v5[14] = 0;
    v5[15] = 0;
    if ( !sub_2A89C8(v1, v9) )
      goto LABEL_13;
    *((_QWORD *)v5 + 2) = 0;
    for ( *((_QWORD *)v5 + 3) = 0; ; *((_QWORD *)v5 + 3) = v8 )
    {
      *(_DWORD *)(v1 + 164) = v5;
      sub_1E0B10(&unk_487770, v5 + 14);
      result = (int *)sub_324030(dword_48776C, v1, 1);
      if ( result )
      {
        if ( !*result )
          break;
      }
      sub_94700((int)"gdb_bfd.c", 554, "%s: Assertion `%s' failed.", "void gdb_bfd_ref(bfd*)", "slot && !*slot");
LABEL_13:
      v8 = v9[0];
      *((_QWORD *)v5 + 2) = v9[12];
    }
    *result = v1;
  }
  return result;
}
