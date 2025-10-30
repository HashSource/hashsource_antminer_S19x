int __fastcall sub_1EF460(int a1, char *s)
{
  __int64 v4; // kr00_8
  __int64 v5; // kr08_8
  int v6; // r1
  int v7; // r2
  int v9; // r3
  unsigned __int8 *v10; // r6
  char *v11; // r0
  int v12; // r3
  char *v13; // r7
  _DWORD v14[4]; // [sp+0h] [bp-20h] BYREF
  unsigned __int8 *v15; // [sp+10h] [bp-10h] BYREF
  int v16; // [sp+14h] [bp-Ch] BYREF
  __int64 v17; // [sp+18h] [bp-8h]

  v4 = qword_47584C;
  *(_DWORD *)a1 = dword_475848;
  *(_QWORD *)(a1 + 4) = v4;
  if ( s )
  {
    if ( *s == 84 && strlen(s) > 3 )
    {
      v9 = (unsigned __int8)s[3];
      v10 = (unsigned __int8 *)(s + 3);
      v15 = v10;
      if ( v9 )
      {
        while ( 1 )
        {
          v13 = strchr((const char *)v10, 58);
          if ( !v13 )
            break;
          if ( !strncmp((const char *)v10, "thread", v13 - (char *)v10) )
          {
            sub_1E13D4((int)&v16, (unsigned __int8 *)v13 + 1, &v15);
            goto LABEL_4;
          }
          v11 = strchr((const char *)v10, 59);
          v10 = (unsigned __int8 *)(v11 + 1);
          if ( v11 )
          {
            v12 = (unsigned __int8)v11[1];
            v15 = (unsigned __int8 *)(v11 + 1);
            if ( v12 )
              continue;
          }
          break;
        }
      }
    }
    v16 = dword_475848;
    v17 = qword_47584C;
LABEL_4:
    v5 = v17;
    *(_DWORD *)a1 = v16;
    *(_QWORD *)(a1 + 4) = v5;
  }
  if ( sub_98F78((_DWORD *)a1, &dword_475848) )
  {
    sub_1EF394(v14, dword_4878EC, qword_4878F0, SHIDWORD(qword_4878F0));
    v6 = v14[1];
    v7 = v14[2];
    *(_DWORD *)a1 = v14[0];
    *(_DWORD *)(a1 + 4) = v6;
    *(_DWORD *)(a1 + 8) = v7;
  }
  return a1;
}
