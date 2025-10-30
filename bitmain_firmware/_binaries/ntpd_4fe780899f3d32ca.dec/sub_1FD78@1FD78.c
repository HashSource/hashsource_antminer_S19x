char *__fastcall sub_1FD78(int a1, int a2, int a3)
{
  unsigned int v3; // r2
  unsigned int v4; // r3
  unsigned int v5; // r5
  int v6; // r6
  int v7; // r7
  int v8; // r3
  char *v9; // r4
  const char *v10; // r0
  int v11; // r8
  size_t v12; // r0
  int v14; // r5
  _BYTE *v15; // r9
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // [sp+0h] [bp-88h]
  char *v25; // [sp+34h] [bp-54h]
  char v26; // [sp+3Ch] [bp-4Ch]
  int v27; // [sp+44h] [bp-44h] BYREF
  unsigned int v28; // [sp+48h] [bp-40h]
  int v29; // [sp+4Ch] [bp-3Ch]
  int v30; // [sp+50h] [bp-38h]
  int v31; // [sp+54h] [bp-34h]
  int v32; // [sp+58h] [bp-30h]
  int v33; // [sp+5Ch] [bp-2Ch]
  int v34; // [sp+60h] [bp-28h] BYREF
  unsigned int v35; // [sp+64h] [bp-24h]
  int v36; // [sp+68h] [bp-20h]
  int v37; // [sp+6Ch] [bp-1Ch]
  int v38; // [sp+70h] [bp-18h]
  int v39; // [sp+74h] [bp-14h]
  int v40; // [sp+78h] [bp-10h]
  int v41; // [sp+7Ch] [bp-Ch]
  char v42[8]; // [sp+80h] [bp-8h] BYREF
  char v43[8]; // [sp+88h] [bp+0h] BYREF
  char v44[8]; // [sp+90h] [bp+8h] BYREF
  char v45[12]; // [sp+98h] [bp+10h] BYREF
  char v46[40]; // [sp+A4h] [bp+1Ch] BYREF

  strcpy(v42, "addr.%u");
  strcpy(v43, "mask.%u");
  strcpy(v44, "hits.%u");
  v28 = 0;
  v27 = 0;
  strcpy(v45, "flags.%u");
  v29 = 0;
  v34 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  if ( a2 )
  {
    LOWORD(v27) = 10;
    LOWORD(v34) = 10;
    v16 = *(_DWORD *)(a1 + 24);
    v17 = *(_DWORD *)(a1 + 28);
    v18 = *(_DWORD *)(a1 + 32);
    v29 = *(_DWORD *)(a1 + 20);
    v30 = v16;
    v31 = v17;
    v32 = v18;
    v19 = *(_DWORD *)(a1 + 40);
    v20 = *(_DWORD *)(a1 + 44);
    v21 = *(_DWORD *)(a1 + 48);
    v36 = *(_DWORD *)(a1 + 36);
    v37 = v19;
    v38 = v20;
    v39 = v21;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 20);
    v4 = *(_DWORD *)(a1 + 24);
    LOWORD(v27) = 2;
    LOWORD(v34) = 2;
    v28 = bswap32(v3);
    v35 = bswap32(v4);
  }
  v5 = 0;
  v6 = 4;
  v7 = 0;
  v41 = 0;
  do
  {
    if ( v7 <= 1 )
    {
      v14 = rand();
      v7 = 29;
      v5 = v14 ^ (rand() << 16);
    }
    else
    {
      v7 -= 2;
    }
    v8 = v5 & 3;
    v5 >>= 2;
    while ( 1 )
    {
      v9 = &v46[v8 + 36];
      if ( !v42[v8 - 4] )
        break;
      v8 = ((_BYTE)v8 + 1) & 3;
    }
    if ( v8 == 2 )
    {
      sub_6C054(v46, 32, v44, a3);
      sub_1FB4C(v46, *(_DWORD *)(a1 + 4));
    }
    else
    {
      if ( v8 == 3 )
      {
        sub_6C054(v46, 32, v45, a3);
        v15 = (_BYTE *)sub_6D01C(*(unsigned __int16 *)(a1 + 10));
        v11 = sub_6D084(*(unsigned __int16 *)(a1 + 8));
        if ( *v15 )
        {
          v26 = lib_nextbuf;
          v25 = (char *)&lib_stringbuf + 128 * lib_nextbuf;
          memset(v25, 0, 0x80u);
          v22 = v11;
          lib_nextbuf = (v26 + 1) & 0xF;
          v11 = (int)v25;
          sub_6C054(v25, 128, "%s %s", v15, v22);
        }
        v10 = (const char *)v11;
      }
      else
      {
        if ( v8 == 1 )
        {
          sub_6C054(v46, 32, v43, a3);
          v10 = (const char *)sub_6C2E8(&v34);
        }
        else
        {
          sub_6C054(v46, 32, v42, a3);
          v10 = (const char *)sub_6C2E8(&v27);
        }
        v11 = (int)v10;
      }
      v12 = strlen(v10);
      sub_1F0E4(v46, v11, v12);
    }
    --v6;
    *(v9 - 76) = 1;
  }
  while ( v6 );
  return sub_1FBF0(a3);
}
