void sub_25F64()
{
  _DWORD *v0; // r0
  int v1; // r7
  const char **v2; // r4
  unsigned int v3; // r0
  char *v4; // r10
  const unsigned __int16 **v5; // r0
  const unsigned __int16 **v6; // r0
  char *v7; // r6
  int i; // r5
  int v10; // r0
  unsigned __int8 *v11; // r5
  int v12; // t1
  __int16 j; // r3
  size_t v14; // r0
  char *v15; // r5
  size_t v17; // r0
  __int16 v18; // r0
  int v19; // [sp+4h] [bp-60h] BYREF
  unsigned __int8 v20[68]; // [sp+8h] [bp-5Ch] BYREF
  const char **v21; // [sp+4Ch] [bp-18h]
  const char *v22; // [sp+54h] [bp-10h] BYREF
  size_t v23; // [sp+58h] [bp-Ch]

  if ( !word_BA6C8 )
  {
    v0 = (_DWORD *)sys_peer;
    if ( sys_peer && (*(_DWORD *)(sys_peer + 68) & 8) != 0 )
      goto LABEL_4;
    v0 = (_DWORD *)peer_list;
    if ( peer_list )
    {
      while ( (v0[17] & 8) == 0 )
      {
        v0 = (_DWORD *)*v0;
        if ( !v0 )
          goto LABEL_19;
      }
      goto LABEL_4;
    }
LABEL_19:
    sub_1F734(4);
    return;
  }
  v0 = (_DWORD *)sub_3217C((unsigned __int16)word_BA6C8);
  if ( !v0 || (v0[17] & 8) == 0 )
    goto LABEL_19;
LABEL_4:
  v21 = 0;
  sub_3ABAC(v0 + 4, 0, v20);
  v1 = 0;
  v2 = v21;
  word_BA4A0 = (v20[64] & 0xF | (unsigned __int8)(16 * v20[65])) << 8;
  v3 = sub_1FBB8((unsigned int)v21);
  v4 = (char *)sub_64B04(0, v3 + 14, 0, 1);
  while ( 1 )
  {
    v5 = sub_1EA58((int)&unk_B4EF0, &v19);
    if ( !v5 )
      break;
    if ( (*((_WORD *)v5 + 1) & 0x80) != 0 )
    {
      v6 = sub_1EA58((int)v2, &v19);
      if ( !v6 )
      {
        v18 = 6;
LABEL_42:
        sub_1F734(v18);
        free(v4);
        sub_25108(v21);
        return;
      }
      if ( (*((_WORD *)v6 + 1) & 0x80) != 0 )
      {
        v18 = 5;
        goto LABEL_42;
      }
      v4[*(unsigned __int16 *)v6 + 14] = 1;
    }
    else
    {
      v4[*(unsigned __int16 *)v5] = 1;
    }
    v1 = 1;
  }
  if ( v1 )
  {
    v7 = v4;
    for ( i = 1; i != 14; ++i )
    {
      if ( *++v7 )
        sub_20410(i, v20, 1);
    }
    if ( v2 && (*(_WORD *)((_BYTE *)&dword_0 + (_DWORD)v2 + 2) & 0x80) == 0 )
    {
      v15 = v4 + 13;
      do
      {
        if ( *++v15 )
        {
          v17 = strlen(v2[1]);
          v22 = v2[1];
          v23 = v17;
          sub_1F104((char *)&v22, 1, 0);
        }
        v2 += 2;
      }
      while ( (*((_WORD *)v2 + 1) & 0x80) == 0 );
    }
  }
  else
  {
    v10 = 12;
    v11 = (unsigned __int8 *)&unk_95210;
    do
    {
      sub_20410(v10, v20, 0);
      v12 = *++v11;
      v10 = v12;
    }
    while ( v12 );
    if ( v2 )
    {
      for ( j = *(_WORD *)((char *)&dword_0 + (_DWORD)v2 + 2); (j & 0x80) == 0; j = *((_WORD *)v2 + 1) )
      {
        if ( (j & 0x20) != 0 )
        {
          v14 = strlen(v2[1]);
          v22 = v2[1];
          v23 = v14;
          sub_1F104((char *)&v22, 1, 0);
        }
        v2 += 2;
        if ( !v2 )
          break;
      }
    }
  }
  free(v4);
  sub_25108(v21);
  sub_1EDD4(0);
}
