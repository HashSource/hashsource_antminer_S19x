int __fastcall sub_A26CC(int a1)
{
  int v2; // r0
  int v3; // r4
  int v4; // r6
  int v6; // r9
  int v7; // r7
  int v8; // r8
  int v9; // r3
  int v10; // r2
  int v11; // r3
  int v12; // r11
  int v13; // r0
  int v14; // r1
  int v15; // r11
  int v16; // r3
  __int16 v17; // r2
  __int16 v18; // r2
  int v19; // r2
  int v20; // r12
  int v21; // r3
  char v22; // r0
  void *v23; // r1
  int v24; // lr
  void *v25; // r3
  bool v26; // zf
  int v27; // r3
  int v28; // r3
  int v29; // r2
  int v30; // r1
  char v31; // r2
  unsigned int n; // [sp+0h] [bp-Ch]
  int v33; // [sp+4h] [bp-8h]

  v2 = *(_DWORD *)(a1 + 24);
  v3 = *(_BYTE *)(v2 + 2) & 8;
  if ( (*(_BYTE *)(v2 + 2) & 8) == 0 )
  {
    v4 = *(_DWORD *)(v2 + 20);
    if ( v4 )
      return v4;
    v6 = *(__int16 *)(v2 + 4);
    *(_DWORD *)(v2 + 20) = a1;
    if ( v6 > 0 )
    {
      v7 = v3;
      v4 = a1;
      n = 24 * v6;
      while ( 1 )
      {
        v12 = *(_DWORD *)(*(_DWORD *)(v2 + 24) + v3 + 12);
        if ( sub_9D140(v2, v7) )
        {
          v12 = sub_A0870(v12);
          v8 = sub_A2950(*(_DWORD *)(*(_DWORD *)(v12 + 24) + 20));
        }
        else
        {
          v8 = sub_A263C(v12);
        }
        if ( v8 != v12 )
        {
          if ( a1 == v4 )
          {
            v13 = sub_16FF58(a1);
            v14 = *(_DWORD *)(a1 + 24);
            v15 = v13;
            v16 = *(_DWORD *)(v13 + 24);
            *(_DWORD *)(v14 + 20) = v13;
            v17 = *(_WORD *)(v16 + 2);
            LOBYTE(v14) = *(_BYTE *)v14;
            *(_DWORD *)(v16 + 28) = &word_3B4A2C;
            v18 = v17 & 0xFC7F | 0x80;
            *(_WORD *)(v16 + 4) = v6;
            *(_BYTE *)v16 = v14;
            *(_WORD *)(v16 + 2) = v18;
            if ( (v18 & 0x10) != 0 )
            {
              v19 = *(_DWORD *)(v16 + 16);
              v20 = *(_DWORD *)(v19 + 64);
              v21 = *(_DWORD *)(v19 + 60);
              if ( n > v20 - v21 )
              {
                v33 = v19;
                obstack_newchunk((struct obstack *)(v19 + 48), n);
                v19 = v33;
                v21 = *(_DWORD *)(v33 + 60);
                v20 = *(_DWORD *)(v33 + 64);
              }
              v22 = 24 * v6;
              v23 = *(void **)(v19 + 56);
              v24 = *(_DWORD *)(v19 + 72);
              v25 = (void *)(v21 + n);
              v26 = v25 == v23;
              *(_DWORD *)(v19 + 60) = v25;
              if ( v25 == v23 )
                v22 = *(_BYTE *)(v19 + 88);
              v27 = ((unsigned int)v25 + v24) & ~v24;
              *(_DWORD *)(v19 + 60) = v27;
              if ( v26 )
                *(_BYTE *)(v19 + 88) = v22 | 2;
              if ( v27 - *(_DWORD *)(v19 + 52) > (unsigned int)(v20 - *(_DWORD *)(v19 + 52)) )
              {
                v27 = v20;
                *(_DWORD *)(v19 + 60) = v20;
              }
              *(_DWORD *)(v19 + 56) = v27;
            }
            else
            {
              v23 = sub_93028(n);
            }
            v28 = *(_DWORD *)(v4 + 24);
            *(_DWORD *)(*(_DWORD *)(v15 + 24) + 24) = v23;
            memcpy(v23, *(const void **)(v28 + 24), n);
            v29 = *(_DWORD *)(v4 + 24);
            v4 = v15;
            v9 = *(_DWORD *)(v15 + 24);
            v30 = *(_DWORD *)(v29 + 8);
            if ( !v30 )
              v30 = *(_DWORD *)(v29 + 12);
            v31 = *(_BYTE *)(v9 + 2);
            *(_DWORD *)(v9 + 8) = v30;
            *(_DWORD *)(v9 + 12) = 0;
            *(_BYTE *)(v9 + 2) = v31 | 8;
            *(_DWORD *)(v15 + 20) = 0;
          }
          else
          {
            v9 = *(_DWORD *)(v4 + 24);
          }
          v10 = *(_DWORD *)(*(_DWORD *)(a1 + 24) + 24);
          v11 = *(_DWORD *)(v9 + 24) + v3;
          *(_DWORD *)(v11 + 12) = v8;
          *(_DWORD *)(v11 + 16) = *(_DWORD *)(v10 + v3 + 16);
        }
        ++v7;
        v3 += 24;
        if ( v6 == v7 )
          break;
        v2 = *(_DWORD *)(a1 + 24);
      }
      return v4;
    }
  }
  return a1;
}
