int __fastcall sub_2D8DC4(int a1, int *a2)
{
  char *v4; // r2
  int result; // r0
  int v6; // r6
  int v7; // r0
  int (__fastcall *v8)(int); // r3
  int v9; // r0
  int v10; // r3
  char v11; // r8
  __int16 v12; // r0
  _DWORD *v13; // r3
  int v14; // r2
  size_t v15; // r0
  char *v16; // r0
  const char *v17; // r6
  _DWORD *v18; // r0
  int v19; // r2
  int v20; // lr
  char s[100]; // [sp+Ch] [bp-64h] BYREF

  switch ( a2[2] )
  {
    case 7:
      result = sub_2D8D10(a1, ".qnx_core_info", a2[1], a2[5], (unsigned int)a2[5]);
      break;
    case 8:
      v6 = a2[4];
      if ( (unsigned int)a2[1] <= 0xF )
        goto LABEL_17;
      v7 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 40))(a2[4]);
      v8 = *(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 40);
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 160) + 2344) + 4) = v7;
      v9 = v8(v6 + 4);
      v10 = *(_DWORD *)(a1 + 4);
      dword_471208 = v9;
      v11 = (*(int (__fastcall **)(int))(v10 + 40))(v6 + 8);
      v12 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 52))(v6 + 14);
      if ( v12 > 0 )
        v13 = *(_DWORD **)(a1 + 160);
      v14 = dword_471208;
      if ( v12 > 0 )
      {
        v13 = (_DWORD *)v13[586];
        *v13 = v12;
        v13[2] = v14;
      }
      if ( v11 < 0 )
      {
        v13 = *(_DWORD **)(*(_DWORD *)(a1 + 160) + 2344);
        v13[2] = v14;
      }
      sprintf(s, ".qnx_core_status/%ld", v14, v13);
      v15 = strlen(s);
      v16 = (char *)sub_2ACBF4(a1, v15 + 1);
      v17 = v16;
      if ( v16 && (strcpy(v16, s), (v18 = (_DWORD *)sub_2ADB48(a1, v17, (const char *)0x100)) != 0) )
      {
        v19 = a2[5];
        v20 = a2[1];
        v18[21] = 0;
        v18[20] = v19;
        v18[9] = v20;
        v18[16] = 2;
        result = sub_2CC9E0(a1, ".qnx_core_status", (int)v18);
      }
      else
      {
LABEL_17:
        result = 0;
      }
      break;
    case 9:
      v4 = ".reg";
      goto LABEL_3;
    case 10:
      v4 = ".reg2";
LABEL_3:
      result = sub_2CCA44(a1, a2 + 1, a2 + 5, dword_471208, v4);
      break;
    default:
      result = 1;
      break;
  }
  return result;
}
