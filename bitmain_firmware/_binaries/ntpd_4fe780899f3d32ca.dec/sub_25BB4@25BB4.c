void sub_25BB4()
{
  _DWORD *v0; // r0
  int v1; // r3
  int v2; // r4
  _WORD *v3; // r5
  unsigned int v4; // r0
  char *v5; // r7
  unsigned __int16 *v6; // r0
  unsigned __int16 *v7; // r0
  char *v8; // r6
  int v10; // r0
  unsigned __int8 *v11; // r4
  int v12; // t1
  __int16 i; // r3
  const char *v14; // r4
  _WORD *v15; // r5
  char *v16; // r4
  __int16 v17; // r3
  const char *v19; // r6
  int v20; // r0
  int v21; // [sp+4h] [bp-60h] BYREF
  unsigned __int8 v22[68]; // [sp+8h] [bp-5Ch] BYREF
  _WORD *v23; // [sp+4Ch] [bp-18h]
  const char *v24; // [sp+54h] [bp-10h] BYREF
  size_t v25; // [sp+58h] [bp-Ch]

  if ( !word_B96C8 )
  {
    v0 = (_DWORD *)sys_peer;
    if ( sys_peer )
    {
      v1 = *(_DWORD *)(sys_peer + 68);
      if ( (v1 & 8) != 0 )
        goto LABEL_4;
    }
    v0 = (_DWORD *)peer_list;
    if ( peer_list )
    {
      do
      {
        v1 = v0[17];
        if ( (v1 & 8) != 0 )
          goto LABEL_4;
        v0 = (_DWORD *)*v0;
      }
      while ( v0 );
    }
LABEL_15:
    sub_1F4D0(4);
    return;
  }
  v0 = (_DWORD *)sub_31C78((unsigned __int16)word_B96C8);
  if ( !v0 )
    goto LABEL_15;
  v1 = v0[17];
  if ( (v1 & 8) == 0 )
    goto LABEL_15;
LABEL_4:
  v23 = 0;
  sub_3A3B4(v0 + 4, 0, v22, v1);
  v2 = 0;
  v3 = v23;
  word_B94A0 = __rev16(v22[64] & 0xF | (unsigned __int8)(16 * v22[65]));
  v4 = sub_1F95C((unsigned int)v23);
  v5 = (char *)sub_63BA4(0, v4 + 14, 0, 1);
  while ( 1 )
  {
    v6 = (unsigned __int16 *)sub_1E820((int)&unk_B3EF0, &v21);
    if ( !v6 )
      break;
    if ( (v6[1] & 0x80) != 0 )
    {
      v7 = (unsigned __int16 *)sub_1E820((int)v3, &v21);
      if ( !v7 )
      {
        v20 = 6;
LABEL_41:
        sub_1F4D0(v20);
        free(v5);
        sub_24DE4(v23);
        return;
      }
      if ( (v7[1] & 0x80) != 0 )
      {
        v20 = 5;
        goto LABEL_41;
      }
      v5[*v7 + 14] = 1;
    }
    else
    {
      v5[*v6] = 1;
    }
    v2 = 1;
  }
  if ( v2 )
  {
    v8 = v5;
    do
    {
      if ( *++v8 )
        sub_201A8(v2, v22, 1);
      ++v2;
    }
    while ( v2 != 14 );
    if ( v3 && (*(_WORD *)((_BYTE *)&dword_0 + (_DWORD)v3 + 2) & 0x80) == 0 )
    {
      v15 = v3 + 4;
      v16 = v5 + 13;
      do
      {
        if ( *++v16 )
        {
          v19 = (const char *)*((_DWORD *)v15 - 1);
          v25 = strlen(v19);
          v24 = v19;
          sub_1EEC8((char *)&v24, 1, 0);
        }
        v17 = v15[1];
        v15 += 4;
      }
      while ( (v17 & 0x80) == 0 );
    }
  }
  else
  {
    v10 = 12;
    v11 = (unsigned __int8 *)&unk_93CB4;
    do
    {
      sub_201A8(v10, v22, 0);
      v12 = *++v11;
      v10 = v12;
    }
    while ( v12 );
    if ( v3 )
    {
      for ( i = *(_WORD *)((char *)&dword_0 + (_DWORD)v3 + 2); (i & 0x80) == 0; i = v3[1] )
      {
        if ( (i & 0x20) != 0 )
        {
          v14 = (const char *)*((_DWORD *)v3 + 1);
          v25 = strlen(v14);
          v24 = v14;
          sub_1EEC8((char *)&v24, 1, 0);
        }
        v3 += 4;
        if ( !v3 )
          break;
      }
    }
  }
  free(v5);
  sub_24DE4(v23);
  sub_1EBA4(0);
}
