int __fastcall sub_7FD6C(int **a1, const void *a2, size_t a3, const char *a4, int a5)
{
  int v8; // r7
  char *v9; // r0
  int v10; // r8
  void *v11; // r0
  _BYTE *v12; // r5
  int v13; // r4
  int v14; // r3
  int v15; // r2
  const char *v16; // r6
  char *v17; // r10
  signed int v18; // r7
  int v20; // r2
  const char *v21; // r0
  int v22; // r2
  char v23; // r0
  int v25; // [sp+10h] [bp-14h]
  int v26; // [sp+14h] [bp-10h]
  char *endptr; // [sp+18h] [bp-Ch] BYREF

  v8 = a5;
  v9 = (char *)sub_7FBE0(a5 + 12 + a3);
  v10 = (int)v9;
  if ( a4 )
  {
    if ( !a5 )
      v9[8] = 0;
    *(_DWORD *)v9 = 1;
    if ( !a5 )
    {
LABEL_19:
      v11 = (void *)(v10 + v8 + 9);
      *(_DWORD *)(v10 + 4) = v11;
      goto LABEL_20;
    }
    v12 = v9 + 8;
    v13 = a5;
    v14 = a5;
    while ( 1 )
    {
      v15 = *(unsigned __int8 *)a4;
      v16 = a4 + 1;
      if ( !*a4 )
      {
LABEL_18:
        v8 = v14;
        *v12 = 0;
        goto LABEL_19;
      }
      if ( v15 == 38 && v13 > 2 )
        break;
LABEL_7:
      --v13;
      a4 = v16;
      *v12++ = v15;
      if ( v13 <= 0 )
        goto LABEL_18;
    }
    if ( a4[1] == 35 )
    {
      v20 = *((unsigned __int8 *)a4 + 2);
      v25 = v14;
      if ( v20 == 120 )
        v21 = a4 + 3;
      else
        v21 = a4 + 2;
      if ( v20 == 120 )
        v22 = 16;
      else
        v22 = 10;
      v23 = strtoul(v21, &endptr, v22);
      v14 = v25;
      if ( *endptr == 59 && endptr - a4 <= v13 )
      {
        v13 -= endptr - a4;
        LOBYTE(v15) = v23;
        v16 = endptr + 1;
        goto LABEL_7;
      }
    }
    else
    {
      v17 = (char *)&unk_A0984;
      v26 = v14;
      v18 = 4;
      if ( v13 < 4 )
        goto LABEL_14;
      while ( 1 )
      {
        if ( !strncmp(v16, v17 + 8, v18) )
        {
          v14 = v26;
          v16 += v18;
          v13 -= v18;
          LOBYTE(v15) = *v17;
          goto LABEL_7;
        }
LABEL_14:
        if ( v17 == (char *)&unk_A09C4 )
          break;
        while ( 1 )
        {
          v17 += 16;
          v18 = *((_DWORD *)v17 + 1);
          if ( v18 <= v13 )
            break;
          if ( v17 == (char *)&unk_A09C4 )
            goto LABEL_17;
        }
      }
LABEL_17:
      v14 = v26;
    }
    LOBYTE(v15) = 38;
    goto LABEL_7;
  }
  *(_DWORD *)v9 = 0;
  v11 = v9 + 8;
  *(_DWORD *)(v10 + 4) = v11;
LABEL_20:
  memcpy(v11, a2, a3);
  *(_BYTE *)(*(_DWORD *)(v10 + 4) + a3) = 0;
  sub_7FC64(a1, v10);
  return v10;
}
