int __fastcall sub_A464C(int a1, int a2, int a3, int a4)
{
  _BYTE *v8; // r4
  int v9; // r10
  _BYTE *v10; // r11
  int result; // r0
  size_t v12; // r10
  int v13; // r4
  const char *v14; // r9
  int v15; // r0
  int v16; // r9
  int v17; // r0
  int v18; // r10
  int v19; // r0
  char v20; // r3
  int v21; // r0
  char *s1; // [sp+4h] [bp-28h]
  int v23; // [sp+8h] [bp-24h]
  int v24; // [sp+Ch] [bp-20h]
  _BYTE v25[28]; // [sp+10h] [bp-1Ch] BYREF

  v8 = (_BYTE *)sub_C2900(a2, a3, v25);
  if ( !v8 )
  {
    result = sub_A6B40(a1, a2, a3, a4);
    goto LABEL_10;
  }
  v9 = 0;
  v10 = 0;
  do
  {
    if ( sub_21D9B0(v8[20] & 0x1F, v8[32] & 7, a4) && *((_DWORD *)off_46DBB8 + 4 * ((unsigned __int8)v8[32] >> 3)) != 12 )
    {
      if ( (v8[33] & 2) != 0 )
      {
        v10 = v8;
      }
      else
      {
        v9 = 1;
        v17 = sub_21C7C8(v8, v8[33] & 2);
        sub_9D6C0(a1, v17, a2);
      }
    }
    v8 = (_BYTE *)sub_C294C(a3, v25);
  }
  while ( v8 );
  result = sub_A6B40(a1, a2, a3, a4);
  if ( result || (!v10 ? (v18 = 0) : (v18 = v9 ^ 1), !v18) )
  {
LABEL_10:
    if ( !*(_BYTE *)(a3 + 60) )
      goto LABEL_34;
    goto LABEL_11;
  }
  v19 = sub_21C7C8(v10, 0);
  result = sub_9D6C0(a1, v19, a2);
  if ( !*(_BYTE *)(a3 + 60) )
  {
LABEL_34:
    result = sub_A3C94(a3 + 32, a3);
    v20 = *(_BYTE *)(a3 + 56);
    *(_BYTE *)(a3 + 60) = 1;
    if ( (v20 & 2) != 0 )
      return result;
    goto LABEL_12;
  }
LABEL_11:
  if ( (*(_BYTE *)(a3 + 56) & 2) != 0 )
    return result;
LABEL_12:
  v12 = *(_DWORD *)(a3 + 36);
  s1 = *(char **)(a3 + 32);
  result = sub_C28A8(a2, v25);
  v13 = result;
  if ( result )
  {
    v24 = 0;
    v23 = 0;
    do
    {
      if ( sub_21D9B0(*(_BYTE *)(v13 + 20) & 0x1F, *(_BYTE *)(v13 + 32) & 7, a4) )
      {
        v14 = *(const char **)v13;
        if ( **(_BYTE **)v13 == 95
          && !strncmp(*(const char **)v13, "_ada_", 5u)
          && !strncmp(s1, v14 + 5, v12)
          && sub_9A6F0(&v14[v12 + 5])
          && *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v13 + 32) >> 3)) != 12 )
        {
          if ( (*(_BYTE *)(v13 + 33) & 2) != 0 )
          {
            v23 = v13;
          }
          else
          {
            v15 = sub_21C7C8(v13, *(_BYTE *)(v13 + 33) & 2);
            sub_9D6C0(a1, v15, a2);
            v24 = 1;
          }
        }
      }
      v13 = sub_C28E4(v25);
    }
    while ( v13 );
    result = v23;
    if ( v23 )
      v16 = v24 ^ 1;
    else
      v16 = 0;
    if ( v16 )
    {
      v21 = sub_21C7C8(v23, 0);
      return sub_9D6C0(a1, v21, a2);
    }
  }
  return result;
}
