char *__fastcall sub_B19C0(int a1)
{
  const char *v2; // r0
  char *v3; // r4
  const char *v4; // r6
  size_t v5; // r0
  _BYTE *v6; // r0
  char *v7; // r0
  char *v8; // r3
  int v9; // r3
  char *v10; // r1
  char *v11; // r2

  if ( !sub_A0854(a1) )
    return 0;
  v2 = (const char *)sub_A0854(a1);
  v3 = (char *)dword_4781FC;
  v4 = v2;
  if ( !dword_4781FC )
  {
    v5 = strlen(v2);
    goto LABEL_24;
  }
  v5 = strlen(v2);
  if ( v5 >= dword_478200 )
  {
LABEL_24:
    dword_478200 = 2 * (v5 + 8);
    v3 = (char *)sub_93050((void *)dword_4781FC, 2 * (v5 + 8));
    dword_4781FC = (int)v3;
  }
  strcpy(v3, v4);
  v6 = (_BYTE *)sub_338BD4(v3, "___");
  if ( v6 )
    *v6 = 0;
  v7 = &v3[strlen(v3) - 1];
  if ( v3 < v7 )
  {
    v8 = v7;
    do
    {
      v7 = v8--;
      if ( *v7 == 95 && *v8 == 95 )
        break;
      v7 = v8;
    }
    while ( v8 != v3 );
  }
  if ( v3 == v7 )
    return v3;
  if ( islower((unsigned __int8)v7[1]) )
  {
    v9 = (unsigned __int8)*v3;
    v10 = v3;
    if ( *v3 )
    {
      v11 = v3;
      do
      {
        while ( v9 != 95 || v11[1] != 95 )
        {
          ++v11;
          *v10 = v9;
          v9 = (unsigned __int8)*v11;
          ++v10;
          if ( !*v11 )
            goto LABEL_21;
        }
        *v10 = 46;
        v11 += 2;
        v9 = (unsigned __int8)*v11;
        ++v10;
      }
      while ( *v11 );
    }
LABEL_21:
    *v10 = 0;
    return v3;
  }
  return 0;
}
