int __fastcall sub_31954C(int result, int a2, int *a3, int *a4)
{
  int **v4; // r8
  unsigned int v5; // r4
  int v8; // r1
  int v9; // r2
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int (__fastcall *v14)(unsigned int, int, int); // r3
  int v15; // r2
  int v16; // r2
  int v17; // r3
  char *v18; // r9
  int v19; // r3
  int v20; // r1
  char v21; // r11
  char v22; // t1
  void (__fastcall *v23)(unsigned int, int, int); // r3
  int v24; // r2
  int v25; // r3
  int v26; // r3

  v4 = (int **)a4;
  v5 = result;
  if ( !a4 )
  {
LABEL_5:
    v8 = *(_DWORD *)(v5 + 256);
    goto LABEL_6;
  }
  while ( a4[2] )
  {
    a4 = (int *)*a4;
    if ( !a4 )
    {
      result = sub_3191C4(result, a2, v4, 0);
      goto LABEL_5;
    }
  }
  if ( *(_DWORD *)a4[1] == 42 )
  {
    result = sub_3191C4(result, a2, v4, 0);
    v11 = *(_DWORD *)(v5 + 256);
    goto LABEL_14;
  }
  v18 = " (";
  v19 = *(_DWORD *)(result + 256);
  do
  {
    v20 = v19;
    v22 = *v18++;
    v21 = v22;
    if ( v19 == 255 )
    {
      v23 = *(void (__fastcall **)(unsigned int, int, int))(v5 + 264);
      v24 = *(_DWORD *)(v5 + 268);
      *(_BYTE *)(v5 + 255) = 0;
      v23(v5, 255, v24);
      v19 = 1;
      v20 = 0;
      ++*(_DWORD *)(v5 + 296);
    }
    else
    {
      ++v19;
    }
    *(_DWORD *)(v5 + 256) = v19;
    *(_BYTE *)(v5 + v20) = v21;
    *(_BYTE *)(v5 + 260) = v21;
  }
  while ( "" != v18 );
  result = sub_3191C4(v5, a2, v4, 0);
  v25 = *(_DWORD *)(v5 + 256);
  if ( v25 != 255 )
  {
    v8 = v25 + 1;
    *(_DWORD *)(v5 + 256) = v25 + 1;
    *(_BYTE *)(v5 + v25) = 41;
    *(_BYTE *)(v5 + 260) = 41;
LABEL_6:
    if ( v8 == 255 )
    {
      v9 = *(_DWORD *)(v5 + 268);
      *(_BYTE *)(v5 + 255) = 0;
      result = (*(int (__fastcall **)(unsigned int, int, int))(v5 + 264))(v5, 255, v9);
      v10 = *(_DWORD *)(v5 + 296);
      *(_BYTE *)v5 = 32;
      v11 = 1;
      *(_DWORD *)(v5 + 296) = v10 + 1;
      goto LABEL_8;
    }
    goto LABEL_25;
  }
  *(_BYTE *)(v5 + 255) = 0;
  result = (*(int (__fastcall **)(unsigned int, int, _DWORD))(v5 + 264))(v5, 255, *(_DWORD *)(v5 + 268));
  v26 = *(_DWORD *)(v5 + 296);
  v8 = 1;
  *(_BYTE *)v5 = 41;
  *(_DWORD *)(v5 + 296) = v26 + 1;
LABEL_25:
  v11 = v8 + 1;
  *(_DWORD *)(v5 + 256) = v8 + 1;
  *(_BYTE *)(v5 + v8) = 32;
  *(_BYTE *)(v5 + 260) = 32;
LABEL_14:
  if ( v11 != 255 )
  {
LABEL_8:
    v12 = v11 + 1;
    *(_DWORD *)(v5 + 256) = v11 + 1;
    *(_BYTE *)(v5 + v11) = 91;
    *(_BYTE *)(v5 + 260) = 91;
    v13 = *a3;
    if ( !*a3 )
      goto LABEL_9;
    goto LABEL_16;
  }
  *(_BYTE *)(v5 + 255) = 0;
  result = (*(int (__fastcall **)(unsigned int, int, _DWORD))(v5 + 264))(v5, 255, *(_DWORD *)(v5 + 268));
  v17 = *(_DWORD *)(v5 + 296);
  *(_BYTE *)v5 = 91;
  v12 = 1;
  *(_BYTE *)(v5 + 260) = 91;
  v13 = *a3;
  *(_DWORD *)(v5 + 296) = v17 + 1;
  *(_DWORD *)(v5 + 256) = 1;
  if ( !v13 )
    goto LABEL_17;
LABEL_16:
  result = sub_314740(v5, a2, v13);
  v12 = *(_DWORD *)(v5 + 256);
LABEL_9:
  if ( v12 != 255 )
  {
LABEL_17:
    v16 = v12 + 1;
    goto LABEL_11;
  }
  v14 = *(int (__fastcall **)(unsigned int, int, int))(v5 + 264);
  v15 = *(_DWORD *)(v5 + 268);
  *(_BYTE *)(v5 + 255) = 0;
  result = v14(v5, 255, v15);
  v16 = 1;
  v12 = 0;
  ++*(_DWORD *)(v5 + 296);
LABEL_11:
  *(_DWORD *)(v5 + 256) = v16;
  *(_BYTE *)(v5 + v12) = 93;
  *(_BYTE *)(v5 + 260) = 93;
  return result;
}
