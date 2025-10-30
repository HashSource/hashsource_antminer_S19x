int __fastcall sub_24D6D8(int a1, unsigned int a2, int a3, unsigned int a4)
{
  int result; // r0
  int v9; // r3
  unsigned int v10; // r2
  int v11; // kr04_4
  int v12; // r4
  int v13; // r8
  char *v14; // r12
  char *v15; // r5
  char *v16; // r2
  void *v17; // r9
  int v18; // r11
  int v19; // r3
  unsigned int v20; // r2
  char *v21; // r0
  void *v22; // r11
  char *v23; // r9
  char *v24; // r2
  char *v25; // r3
  int v26; // r9
  char *v27; // r3
  char *v28; // r9
  unsigned int v29; // r1
  void *dest; // [sp+0h] [bp-2Ch]
  unsigned int desta; // [sp+0h] [bp-2Ch]
  int v32; // [sp+Ch] [bp-20h]
  unsigned __int64 v33; // [sp+10h] [bp-1Ch]
  size_t v34; // [sp+20h] [bp-Ch]
  char *v35; // [sp+24h] [bp-8h]

  result = (int)sub_24D61C();
  if ( result )
  {
    *(_DWORD *)(a1 + 4) = *(_DWORD *)a1;
    v9 = *(_DWORD *)(result + 4);
    if ( *(_DWORD *)result != v9 )
    {
      v11 = a3;
      v10 = a2 + a3;
      v32 = a3;
      v12 = *(_DWORD *)result + 8;
      v13 = v9 + 8;
      LODWORD(v33) = v10;
      HIDWORD(v33) = (__PAIR64__(a4, a2) + (unsigned int)v11) >> 32;
      do
      {
        if ( sub_1B05A0(*(_DWORD *)(v12 - 8), *(_DWORD *)(v12 - 4), a2, v32) )
        {
          v14 = *(char **)(v12 - 8);
          dest = v14;
          if ( (unsigned int)v14 < a2 )
            dest = (void *)a2;
          v15 = *(char **)(a1 + 4);
          v16 = &v14[*(_DWORD *)(v12 - 4)];
          v17 = dest;
          if ( (unsigned int)v16 > v33 )
            v16 = (char *)v33;
          v18 = v16 - (_BYTE *)dest;
          if ( v15 == *(char **)(a1 + 8) )
          {
            v19 = (int)&v15[-*(_DWORD *)a1];
            v20 = v19 >> 3;
            if ( !(v19 >> 3) )
            {
              v34 = 8;
              goto LABEL_18;
            }
            v29 = 2 * v20;
            v34 = 2 * v20;
            if ( v20 <= 2 * v20 && v29 <= 0x1FFFFFFF )
            {
              if ( v29 )
              {
                v34 = 16 * v20;
LABEL_18:
                v35 = &v15[-*(_DWORD *)a1];
                v21 = (char *)sub_9836C(v34);
                v19 = (int)v35;
                desta = (unsigned int)v21;
              }
              else
              {
                desta = 2 * v20;
              }
              if ( desta + v19 )
              {
                *(_DWORD *)(desta + v19) = v17;
                *(_DWORD *)(desta + v19 + 4) = v18;
              }
              v22 = *(void **)a1;
              v23 = &v15[-*(_DWORD *)a1];
              if ( *(char **)a1 != v15 )
                memmove((void *)desta, *(const void **)a1, (size_t)&v15[-*(_DWORD *)a1]);
              v24 = *(char **)(a1 + 4);
              v25 = v23 + 8;
              v26 = v24 - v15;
              v27 = &v25[desta];
              if ( v24 != v15 )
                v27 = (char *)memmove(v27, v15, v24 - v15);
              v28 = &v27[v26];
              if ( v22 )
                sub_339E64(v22);
              *(_DWORD *)(a1 + 4) = v28;
              *(_DWORD *)a1 = desta;
              *(_DWORD *)(a1 + 8) = desta + v34;
              goto LABEL_13;
            }
            v34 = -8;
            goto LABEL_18;
          }
          if ( v15 )
          {
            *(_DWORD *)v15 = dest;
            *((_DWORD *)v15 + 1) = v18;
          }
          *(_DWORD *)(a1 + 4) = v15 + 8;
        }
LABEL_13:
        v12 += 8;
      }
      while ( v13 != v12 );
    }
    sub_1B07F4((char **)a1);
    return 1;
  }
  return result;
}
