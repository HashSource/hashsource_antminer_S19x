int __fastcall sub_2EA28(int a1, int a2)
{
  int v3; // r2
  int v5; // r6
  int v6; // r9
  int v7; // r8
  int v8; // r11
  int v9; // r0
  int v10; // r2
  _BYTE *v11; // r10
  int v12; // r3
  int *v13; // r1
  int v14; // r12
  int v15; // lr
  unsigned int v16; // r1
  bool v17; // zf
  int v18; // r1
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v3 = dword_A0D68 + 4 * a1;
  if ( *(_DWORD *)(v3 + 4) )
  {
    v5 = 0;
    v6 = 0;
    if ( !a2 )
      *(_BYTE *)(dword_A0D68 + a1 + 12918) = 0;
    sub_2E9B8();
    sub_1AD6C((unsigned __int8)a1, 1, 0, (unsigned __int8)a2);
    while ( 1 )
    {
      while ( 1 )
      {
        sub_4A804(300);
        pthread_mutex_lock(&stru_138630);
        v7 = dword_241D70;
        v5 += dword_241D70;
        if ( dword_241D70 <= 0 )
          break;
        v8 = dword_A0D68;
        v9 = 0;
        v10 = dword_241D6C;
        v11 = (_BYTE *)(dword_A0D68 + a1 + 12918);
        do
        {
          while ( 1 )
          {
            v12 = v10 + 1;
            ++v9;
            v13 = &dword_241D68[2 * v10 + 2];
            if ( (unsigned int)(v10 + 1) > 0x1FE )
              v12 = 0;
            v14 = *((unsigned __int8 *)v13 + 10);
            v10 = v12;
            v15 = *((unsigned __int8 *)v13 + 11);
            v16 = v13[1];
            v17 = v15 == a1;
            if ( v15 == a1 )
              v17 = v14 == 0;
            if ( v17 )
              break;
            if ( v7 == v9 )
              goto LABEL_21;
          }
          if ( HIWORD(v16) == 5014 )
            ++*v11;
        }
        while ( v7 != v9 );
LABEL_21:
        v18 = *(unsigned __int8 *)(v8 + 12935);
        v6 = 0;
        dword_241D6C = v12;
        dword_241D70 = 0;
        if ( v5 > 390 * v18 )
        {
LABEL_22:
          pthread_mutex_unlock(&stru_138630);
          return 1;
        }
LABEL_27:
        pthread_mutex_unlock(&stru_138630);
      }
      if ( v5 > 390 * *(unsigned __int8 *)(dword_A0D68 + 12935) )
        goto LABEL_22;
      if ( dword_241D70 )
      {
        if ( !a2 && *(_BYTE *)(dword_A0D68 + a1 + 12918) == 78 )
          goto LABEL_22;
        goto LABEL_27;
      }
      ++v6;
      sub_4A804(100);
      pthread_mutex_unlock(&stru_138630);
      if ( v6 == 4 )
        return 1;
    }
  }
  if ( (unsigned int)dword_9E31C <= 3 )
    return *(_DWORD *)(v3 + 4);
  snprintf(s, 0x800u, "Chain %d is not exist.\n", a1);
  sub_47AB4(3, s, 0);
  return 0;
}
