int __fastcall sub_19949C(int a1, unsigned int **a2, int a3, int a4)
{
  unsigned int *v5; // r1
  int *v6; // r6
  void *v8; // r10
  int *v9; // r7
  int *v10; // r4
  int *v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r1
  int v18; // t1
  int v19; // r9
  int v20; // r2
  void *v21; // r3
  unsigned int *v22; // r3
  unsigned int v24; // [sp+Ch] [bp-38h]
  void *ptr; // [sp+18h] [bp-2Ch] BYREF
  int *v28; // [sp+1Ch] [bp-28h]
  _DWORD v29[8]; // [sp+20h] [bp-24h] BYREF

  v5 = *a2;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( v5 && *v5 )
  {
    v6 = (int *)v5[2];
    if ( v6 )
    {
      v24 = 0;
      while ( 1 )
      {
        ((void (__fastcall *)(_DWORD))loc_1CD290)(*(_DWORD *)(*(_DWORD *)(v6[1] + 4) + 16));
        sub_220DA4(&ptr, v6, a3, a4);
        v8 = ptr;
        v9 = v28;
        if ( ptr != v28 )
        {
          v10 = (int *)ptr;
          do
          {
            while ( 1 )
            {
              v18 = *v10++;
              memset(v29, 0, sizeof(v29));
              v19 = *(_DWORD *)(a1 + 4);
              v20 = *(_DWORD *)(a1 + 8);
              v21 = *(void **)(*(_DWORD *)(v6[1] + 4) + 16);
              v29[3] = v18;
              v28 = v6;
              ptr = v21;
              v29[2] = a3;
              if ( v19 != v20 )
                break;
              sub_DFC48((char **)a1, (char *)v19, (int *)&ptr);
              if ( v9 == v10 )
                goto LABEL_13;
            }
            if ( v19 )
            {
              v11 = v28;
              v12 = v29[0];
              v13 = v29[1];
              *(_DWORD *)v19 = ptr;
              *(_DWORD *)(v19 + 4) = v11;
              *(_DWORD *)(v19 + 8) = v12;
              *(_DWORD *)(v19 + 12) = v13;
              v14 = v29[3];
              v15 = v29[4];
              v16 = v29[5];
              *(_DWORD *)(v19 + 16) = v29[2];
              *(_DWORD *)(v19 + 20) = v14;
              *(_DWORD *)(v19 + 24) = v15;
              *(_DWORD *)(v19 + 28) = v16;
              v17 = v29[7];
              *(_DWORD *)(v19 + 32) = v29[6];
              *(_DWORD *)(v19 + 36) = v17;
            }
            *(_DWORD *)(a1 + 4) = v19 + 40;
          }
          while ( v9 != v10 );
        }
LABEL_13:
        if ( v8 )
          sub_339E64(v8);
        v22 = *a2;
        ++v24;
        if ( !*a2 || v24 >= *v22 )
          break;
        v6 = (int *)v22[v24 + 2];
        if ( !v6 )
          goto LABEL_18;
      }
    }
    else
    {
LABEL_18:
      sub_94700(
        (int)"linespec.c",
        4252,
        "%s: Assertion `%s' failed.",
        "std::vector<symtab_and_line> decode_digits_ordinary(linespec_state*, linespec_p, int, linetable_entry**)",
        "elt != NULL");
    }
  }
  return a1;
}
