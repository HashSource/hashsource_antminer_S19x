int __fastcall sub_6A488(int a1, int a2, int a3, int a4, int a5)
{
  int *v9; // r5
  int v11; // r8
  int *v12; // r4
  __int64 v13; // r2
  int v14; // r7
  int v15; // r7
  int *v16; // r4
  int v17; // r3
  int *v18; // r7
  int v19; // r0
  int *v20; // r2
  void *ptr; // [sp+0h] [bp-Ch] BYREF
  void *v22[2]; // [sp+4h] [bp-8h] BYREF

  v9 = (int *)malloc(0x18u);
  if ( !v9 )
    return 2;
  v11 = a1 + 4;
  *v9 = a1 + 4;
  v9[1] = a1 + 4;
  v9[3] = 1;
  v9[4] = sub_6ABA8(a2, a3);
  if ( a4 )
    v9[5] = sub_6ABA8(a4, a5);
  else
    v9[5] = 0;
  v12 = *(int **)a1;
  if ( v11 == *(_DWORD *)a1 )
  {
    *(_DWORD *)a1 = v9;
    v9[2] = 0;
    v20 = v9;
  }
  else
  {
    while ( 1 )
    {
      sub_6AC04(v12[4], &ptr);
      sub_6AC04(v9[4], v22);
      v14 = (*(int (__fastcall **)(void *, void *))(a1 + 36))(v22[0], ptr);
      free(ptr);
      free(v22[0]);
      if ( !v14 )
        return 401;
      v13 = *(_QWORD *)v12;
      if ( v14 < 0 )
        HIDWORD(v13) = *v12;
      if ( v11 == HIDWORD(v13) )
        break;
      v12 = (int *)HIDWORD(v13);
    }
    v9[2] = (int)v12;
    sub_6AC04(v12[4], &ptr);
    sub_6AC04(v9[4], v22);
    v15 = (*(int (__fastcall **)(void *, void *))(a1 + 36))(v22[0], ptr);
    free(ptr);
    free(v22[0]);
    v20 = *(int **)a1;
    if ( v15 >= 0 )
      v12[1] = (int)v9;
    else
      *v12 = (int)v9;
LABEL_17:
    if ( v9 != v20 )
    {
      do
      {
        v16 = (int *)v9[2];
        if ( v16[3] != 1 )
          break;
        v17 = v16[2];
        v18 = *(int **)v17;
        if ( v16 == *(int **)v17 )
        {
          v19 = *(_DWORD *)(v17 + 4);
          if ( *(_DWORD *)(v19 + 12) == 1 )
          {
            v16[3] = 0;
            v9 = (int *)v17;
            *(_DWORD *)(v19 + 12) = 0;
            *(_DWORD *)(v17 + 12) = 1;
          }
          else
          {
            if ( (int *)v18[1] == v9 )
            {
              sub_6A090((int **)a1, *(int **)v17);
              v18 = (int *)v18[2];
              v9 = v16;
              v17 = v18[2];
            }
            v18[3] = 0;
            *(_DWORD *)(v17 + 12) = 1;
            sub_6A0E4((_DWORD *)a1, (_DWORD *)v17);
            v20 = *(int **)a1;
          }
          goto LABEL_17;
        }
        if ( v18[3] == 1 )
        {
          v16[3] = 0;
          v9 = (int *)v17;
          v18[3] = 0;
          *(_DWORD *)(v17 + 12) = 1;
          goto LABEL_17;
        }
        if ( v9 == (int *)*v16 )
        {
          sub_6A0E4((_DWORD *)a1, (_DWORD *)v9[2]);
          v9 = v16;
          v17 = *(_DWORD *)(v16[2] + 8);
          v16 = (int *)v16[2];
        }
        v16[3] = 0;
        *(_DWORD *)(v17 + 12) = 1;
        sub_6A090((int **)a1, (int *)v17);
        v20 = *(int **)a1;
      }
      while ( v9 != *(int **)a1 );
    }
  }
  v20[3] = 0;
  sub_6A330((_DWORD **)a1);
  return 0;
}
