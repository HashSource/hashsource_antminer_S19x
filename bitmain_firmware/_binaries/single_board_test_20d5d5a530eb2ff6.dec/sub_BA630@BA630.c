int __fastcall sub_BA630(int a1, _DWORD *a2, int a3)
{
  int v3; // r7
  int v4; // r3
  int v5; // r7
  char v6; // r4
  int v8; // r5
  int v10; // r8
  unsigned int v11; // r6
  int result; // r0
  int v13; // r11
  unsigned int v14; // r0
  int v15; // r3
  unsigned int v16; // r2
  _DWORD *v17; // r2
  int v18; // r7
  char *v19; // r3
  unsigned int v20; // r1
  unsigned int v21; // r0
  unsigned int v22; // r1
  unsigned int v23; // r0
  unsigned int v24; // r1
  unsigned int v25; // r0
  unsigned int v26; // r1
  int v27; // r12
  unsigned int *v28; // lr
  unsigned int v29; // t1
  unsigned int v30; // r3
  int v31; // r3
  int *v32; // [sp+0h] [bp-Ch]
  int v33; // [sp+4h] [bp-8h]

  v3 = (a3 + 63) & (a3 >> 31);
  if ( a3 >= 0 )
    v3 = a3;
  v4 = a2[1];
  v5 = v3 >> 6;
  if ( v5 >= v4 )
  {
    sub_B8930((int **)a1, 0);
    return 1;
  }
  else
  {
    v6 = a3 & 0x3F;
    v8 = (64 - (a3 & 0x3F)) & 0x3F;
    v10 = v4 - v5;
    v11 = -v8 | ((unsigned int)-v8 >> 8);
    if ( a2 == (_DWORD *)a1 || (result = sub_B89D8(a1, v4 - v5)) != 0 )
    {
      v13 = v10 - 1;
      v14 = *(_DWORD *)(*a2 + 4 * v5);
      v15 = *a2 + 4 * v5;
      v32 = *(int **)a1;
      v33 = v15;
      if ( v10 == 1 )
      {
        v16 = *(_DWORD *)(*a2 + 4 * v5);
      }
      else
      {
        if ( v10 <= 9 )
        {
          v18 = 0;
        }
        else
        {
          v17 = (_DWORD *)(v15 + 64);
          v18 = 0;
          v19 = (char *)(v32 + 15);
          do
          {
            v20 = *(v17 - 15);
            __pld(v17);
            v18 += 8;
            __pld(v19);
            v17 += 8;
            v19 += 32;
            *((_DWORD *)v19 - 23) = (v20 << v8) & v11 | (v14 >> v6);
            v21 = *(v17 - 22);
            *((_DWORD *)v19 - 22) = (v21 << v8) & v11 | (v20 >> v6);
            v22 = *(v17 - 21);
            *((_DWORD *)v19 - 21) = (v22 << v8) & v11 | (v21 >> v6);
            v23 = *(v17 - 20);
            *((_DWORD *)v19 - 20) = (v23 << v8) & v11 | (v22 >> v6);
            v24 = *(v17 - 19);
            *((_DWORD *)v19 - 19) = (v24 << v8) & v11 | (v23 >> v6);
            v25 = *(v17 - 18);
            *((_DWORD *)v19 - 18) = (v25 << v8) & v11 | (v24 >> v6);
            v26 = *(v17 - 17);
            *((_DWORD *)v19 - 17) = (v26 << v8) & v11 | (v25 >> v6);
            v14 = *(v17 - 16);
            *((_DWORD *)v19 - 16) = (v14 << v8) & v11 | (v26 >> v6);
          }
          while ( v18 != ((v10 - 10) & 0xFFFFFFF8) + 8 );
          v15 = v33;
        }
        v27 = v15 + 4 * v18;
        v28 = (unsigned int *)&v32[v18];
        do
        {
          v29 = *(_DWORD *)(v27 + 4);
          v27 += 4;
          v16 = v29;
          v30 = v14 >> v6;
          ++v18;
          v14 = v29;
          *v28++ = v30 | (v29 << v8) & v11;
        }
        while ( v13 > v18 );
        v13 *= 4;
      }
      v31 = a2[3];
      result = 1;
      *(int *)((char *)v32 + v13) = v16 >> v6;
      *(_DWORD *)(a1 + 12) = v31;
      *(_DWORD *)(a1 + 4) = v10;
    }
  }
  return result;
}
