int __fastcall sub_2425E0(int a1, _DWORD *a2, int *a3, int *a4)
{
  int v5; // r1
  unsigned __int8 *v9; // r0
  int v10; // r2
  unsigned __int8 *v11; // r9
  unsigned __int8 *v12; // r3
  unsigned __int8 *v13; // r5
  int v14; // r3
  int v15; // r5
  unsigned __int8 *v16; // r9
  int result; // r0
  int v18; // r2
  int v19; // r0
  int v20; // r0
  __int64 v21; // r2
  unsigned __int8 *v22; // [sp+4h] [bp-8h] BYREF

  v5 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 )
  {
    v9 = sub_93610(*(unsigned __int8 **)(a1 + 4));
    v22 = *(unsigned __int8 **)(a1 + 4);
    v11 = v22;
    if ( v22 < v9 )
    {
      v12 = (unsigned __int8 *)*v22;
      if ( v12 == (unsigned __int8 *)46 )
      {
        v13 = v22;
LABEL_25:
        v22 = v11;
        v19 = sub_5AB7C(&v22, 46, v10, v12);
        if ( v19 < 0 )
          sub_946E0("negative value: %s", (const char *)v11);
        *(_DWORD *)(a1 + 32) = v19;
        if ( !v19 )
          return 0;
        v11 = v13 + 1;
        *(_BYTE *)(a1 + 36) = 1;
        v22 = v13 + 1;
        if ( isspace(v13[1]) )
          return 0;
        goto LABEL_8;
      }
      v12 = v22 + 1;
      while ( 1 )
      {
        v22 = v12;
        v13 = v12;
        if ( v9 == v12 )
          break;
        v10 = *v12++;
        if ( v10 == 46 )
          goto LABEL_25;
      }
    }
    v14 = *(_DWORD *)(a1 + 40);
    v22 = v11;
    *(_BYTE *)(a1 + 36) = 0;
    *(_DWORD *)(a1 + 32) = v14;
LABEL_8:
    v15 = a1 + 8;
    sub_5AE14(a1 + 8, (int)v11);
    v16 = v22;
    if ( *v22 == 42 && (!v22[1] || isspace(v22[1])) )
    {
      v20 = sub_9360C(v16 + 1);
      LODWORD(v21) = 0x7FFFFFFF;
      HIDWORD(v21) = v20;
      sub_5AF28(a1 + 8, 1, v21);
      *(_DWORD *)a1 = 2;
    }
    else
    {
      *(_DWORD *)a1 = 1;
    }
    goto LABEL_11;
  }
  v15 = a1 + 8;
LABEL_11:
  *a2 = *(_DWORD *)(a1 + 32);
  result = sub_5AE34(v15, v5, (int)a3);
  *a3 = result;
  if ( result < 0 )
    sub_946E0("negative value: %s", *(const char **)(a1 + 4));
  if ( !result )
  {
    *(_DWORD *)a1 = 0;
    return result;
  }
  if ( *(_BYTE *)(a1 + 28) )
  {
    if ( a4 && (unsigned int)(*(_DWORD *)a1 - 1) <= 1 )
    {
      *a4 = *(_DWORD *)(a1 + 20);
      ((void (__fastcall *)(int))loc_242538)(a1);
      return *a2 && *a3;
    }
  }
  else
  {
    v18 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)a1 = *(unsigned __int8 *)(a1 + 28);
    *(_DWORD *)(a1 + 4) = v18;
    if ( a4 )
    {
      *a4 = result;
      return *a2 && *a3;
    }
  }
  return *a2 != 0;
}
