int __fastcall sub_301894(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // r4
  int v8; // r5
  signed int v9; // r6
  int result; // r0
  _DWORD **v11; // r10
  int v12; // r0
  int **v13; // r1
  int *v14; // r3
  int v15; // r3
  _DWORD *v16; // r6
  char **v17; // r2
  int v18; // r11
  bool v19; // zf
  int v20; // r0
  _DWORD *v21; // r1
  int v22; // r3
  int v23; // r2
  int v24; // r1
  int **v25; // t1
  int *v26; // r3
  int v27; // r0
  void *v28; // r2
  int *v29; // [sp+20h] [bp-14h]
  int v30; // [sp+24h] [bp-10h] BYREF
  _DWORD v31[2]; // [sp+2Ch] [bp-8h] BYREF

  v6 = *(_DWORD *)(a3 + 16);
  v30 = a4;
  v8 = *(_DWORD *)(v6 + 148);
  v9 = sub_2A6ADC(v8);
  if ( v9 < 0 )
    return 0;
  if ( !sub_2A9680(v8, v6, &v30) )
    return 0;
  result = v30;
  if ( !v30 )
    return 0;
  if ( !v9 )
    return result;
  v11 = (_DWORD **)sub_2AB368(v9);
  if ( !v11 )
    return 0;
  v12 = sub_2A6B10(v8);
  if ( v12 < 0 )
  {
LABEL_21:
    free(v11);
    return 0;
  }
  if ( v12 )
  {
    v13 = (int **)*v11;
    if ( *v11 )
    {
      v14 = *v13;
      v31[0] = 0;
      v15 = *v14;
      if ( v15 )
      {
        v16 = v11;
        while ( 1 )
        {
          v17 = *(char ***)(v15 + 16);
          v18 = v30;
          v19 = v17 == 0;
          if ( v17 )
            v19 = v17 == &off_470950;
          if ( v19 || v17[15] != (char *)&off_470950 || ((((_WORD)v17[6] & 0x380) - 256) & 0xFEFF) == 0 )
            break;
          v29 = v13[1];
          v27 = sub_2A6904(v8);
          sub_3015A0(*(_DWORD *)(*v16 + 12), v8, (const char **)v6, (_BYTE *)(v18 + v27 * (_DWORD)v29));
          v21 = (_DWORD *)*v16;
          v28 = off_4709EC;
          v21[2] = 0;
          *v21 = v28;
          v21[3] = &unk_41DDD0;
          if ( a5 )
          {
            v20 = 2;
LABEL_17:
            v22 = *(_DWORD *)(v6 + 60);
            v23 = *(_DWORD *)(v22 + 76);
            *(_DWORD *)(*(_DWORD *)(v22 + 72) + 4 * v23) = v21;
            *(_DWORD *)(v22 + 76) = v23 + 1;
            goto LABEL_18;
          }
LABEL_26:
          v25 = (int **)v16[1];
          ++v16;
          v13 = v25;
          if ( !v25 )
            goto LABEL_38;
          v26 = *v13;
          v31[0] = 0;
          v15 = *v26;
          if ( !v15 )
            goto LABEL_28;
        }
        if ( a5 )
        {
          v20 = sub_3009E8(v8, (int)v13, v30, v6, a1, (int)v31);
          v21 = (_DWORD *)*v16;
          goto LABEL_17;
        }
        v20 = sub_3009E8(v8, (int)v13, v30, v6, 0, (int)v31);
LABEL_18:
        if ( v20 != 2 )
        {
          switch ( v20 )
          {
            case 3:
              (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(*(_DWORD *)(a2 + 24) + 28))(
                a2,
                0,
                *(_DWORD *)(**(_DWORD **)*v16 + 4),
                *(_DWORD *)(*(_DWORD *)(*v16 + 12) + 32),
                *(_DWORD *)(*v16 + 8),
                v8,
                v6,
                *(_DWORD *)(*v16 + 4));
              goto LABEL_26;
            case 4:
              (*(void (**)(const char *, ...))(*(_DWORD *)(a2 + 24) + 44))(
                "%X%P: %B(%A): relocation \"%R\" goes out of range\n",
                a1,
                v6,
                *v16);
              goto LABEL_21;
            case 6:
              (*(void (**)(const char *, ...))(*(_DWORD *)(a2 + 24) + 44))(
                "%X%P: %B(%A): relocation \"%R\" is not supported\n",
                a1,
                v6,
                *v16);
              goto LABEL_21;
            case 8:
              (*(void (__fastcall **)(int, _DWORD, int, int, _DWORD, int))(*(_DWORD *)(a2 + 24) + 24))(
                a2,
                *(_DWORD *)(**(_DWORD **)*v16 + 4),
                v8,
                v6,
                *(_DWORD *)(*v16 + 4),
                1);
              goto LABEL_26;
            case 9:
              v24 = v31[0];
              if ( !v31[0] )
              {
                sub_2A6BBC("reloc.c", 8254);
                v24 = v31[0];
              }
              (*(void (__fastcall **)(int, int, int, int, _DWORD))(*(_DWORD *)(a2 + 24) + 32))(
                a2,
                v24,
                v8,
                v6,
                *(_DWORD *)(*v16 + 4));
              goto LABEL_26;
            default:
              (*(void (__fastcall **)(const char *, int, int, _DWORD, int))(*(_DWORD *)(a2 + 24) + 44))(
                "%X%P: %B(%A): relocation \"%R\" returns an unrecognized value %x\n",
                a1,
                v6,
                *v16,
                v20);
              goto LABEL_26;
          }
        }
        goto LABEL_26;
      }
LABEL_28:
      (*(void (**)(const char *, ...))(*(_DWORD *)(a2 + 24) + 44))(
        "%X%P: %B(%A): error: relocation for offset %V has no value\n",
        a1,
        v6,
        v13[1]);
      goto LABEL_21;
    }
  }
LABEL_38:
  free(v11);
  return v30;
}
