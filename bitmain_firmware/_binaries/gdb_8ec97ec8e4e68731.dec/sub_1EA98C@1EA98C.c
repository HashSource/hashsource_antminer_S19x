size_t __fastcall sub_1EA98C(size_t result)
{
  int v1; // r0
  int v2; // r6
  size_t v3; // r5
  _DWORD *v4; // r4
  int v5; // r2
  int v6; // r9
  int v7; // r10
  size_t v8; // r9
  size_t v9; // r0
  signed int v10; // lr
  signed int v11; // r12
  size_t v12; // r1
  char *v13; // r0
  char s[40]; // [sp+8h] [bp-50h] BYREF
  char v15[40]; // [sp+30h] [bp-28h] BYREF

  if ( *(_DWORD *)(dword_487D2C + 8) )
  {
    v1 = sub_16F654(result);
    ((void (__fastcall *)(int))loc_1E2770)(v1);
    v2 = dword_488C94;
    strcpy(*(char **)dword_488C94, "QTro");
    result = strlen(*(const char **)v2);
    v3 = result;
    v4 = *(_DWORD **)(*(_DWORD *)(dword_487D2C + 8) + 100);
    if ( v4 )
    {
      v5 = 0;
      do
      {
        while ( (v4[5] & 0xA) != 0xA )
        {
          v4 = (_DWORD *)v4[3];
          if ( !v4 )
            goto LABEL_8;
        }
        v6 = v4[7];
        v7 = v4[9];
        sprintf(s, "%08lx", v6);
        sprintf(v15, "%08lx", v6 + v7);
        v8 = strlen(s);
        v9 = strlen(v15);
        v10 = *(_DWORD *)(v2 + 4);
        v11 = v8 + v9 + 2 + v3;
        v12 = v10 - v3;
        if ( v11 >= v10 )
        {
          if ( ((int (__fastcall *)(int, size_t, char *, char *))loc_1E2198)(29, v12, ":%s,%s", s) != 1 )
            sub_946B0("Too many sections for read-only sections definition packet.");
          goto LABEL_9;
        }
        v13 = (char *)(*(_DWORD *)v2 + v3);
        v3 = v11;
        result = sub_93170(v13, v12, ":%s,%s", s, v15);
        v4 = (_DWORD *)v4[3];
        v5 = 1;
      }
      while ( v4 );
LABEL_8:
      if ( !v5 )
        return result;
LABEL_9:
      sub_1E7DEC(*(const char **)v2);
      return sub_1E4EB8((char **)v2, (size_t *)(v2 + 4), 0, 0, 0);
    }
  }
  return result;
}
