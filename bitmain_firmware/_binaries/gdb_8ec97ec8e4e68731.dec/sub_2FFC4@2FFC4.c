void *__fastcall sub_2FFC4(int a1, int *a2, int *a3, int *a4)
{
  int v7; // r0
  int v8; // r7
  int v9; // r10
  int v10; // r4
  int v11; // r4
  unsigned int v12; // r6
  int i; // r0
  unsigned int v14; // r3
  int v15; // r0
  void *result; // r0
  int v17; // r4
  int v18; // r0
  unsigned int v19; // r3
  int v20; // r0
  int v21; // r5
  void *v22; // r6
  int v24; // [sp+8h] [bp-54h]
  int v25; // [sp+Ch] [bp-50h]
  int v26; // [sp+14h] [bp-48h] BYREF
  int v27; // [sp+18h] [bp-44h] BYREF
  unsigned int v28; // [sp+1Ch] [bp-40h] BYREF
  _BYTE v29[8]; // [sp+20h] [bp-3Ch] BYREF
  _BYTE v30[8]; // [sp+28h] [bp-34h] BYREF
  char v31[4]; // [sp+30h] [bp-2Ch] BYREF
  char v32[20]; // [sp+34h] [bp-28h] BYREF
  char v33[20]; // [sp+48h] [bp-14h] BYREF

  v7 = sub_16F654();
  v8 = ((int (__fastcall *)(int))loc_165BB8)(v7);
  if ( sub_BC304(&dword_4899A0, 3, &v26) <= 0 )
    return 0;
  if ( sub_BC304(&dword_4899A0, 4, &v27) <= 0 )
    return 0;
  if ( sub_BC304(&dword_4899A0, 5, &v28) <= 0 )
    return 0;
  v9 = v26;
  if ( !v26 || !v28 )
    return 0;
  if ( v27 == 32 )
  {
    if ( a1 != -1 )
    {
      v17 = 0;
      v24 = 0;
      v18 = v26;
      v25 = 0;
      while ( !sub_230020(v18 + 32 * v17, v29, 32) )
      {
        v20 = sub_15C250(v29, 4, v8);
        if ( v20 == 6 )
        {
          v24 = 1;
          v25 = sub_15C250(v30, 4, v8);
        }
        else if ( a1 == v20 )
        {
          v19 = v28;
LABEL_43:
          if ( v19 == v17 )
            return 0;
          v10 = 32;
          v9 = sub_15C250(v30, 4, v8);
          v21 = sub_15C250(v32, 4, v8);
LABEL_39:
          if ( v24 )
            v9 = v9 + v26 - v25;
          goto LABEL_28;
        }
        v19 = v28;
        if ( ++v17 >= v28 )
          goto LABEL_43;
        v18 = v26;
      }
      return 0;
    }
    v10 = v27;
  }
  else
  {
    if ( v27 != 56 )
      return 0;
    if ( a1 != -1 )
    {
      v11 = 0;
      v12 = 0;
      v24 = 0;
      v25 = 0;
      for ( i = v26; !sub_230020(i + v11, v29, 56); i = v26 )
      {
        v15 = sub_15C250(v29, 4, v8);
        if ( v15 == 6 )
        {
          v24 = 1;
          v25 = sub_15C250(v31, 8, v8);
        }
        else if ( a1 == v15 )
        {
          v14 = v28;
LABEL_37:
          if ( v12 == v14 )
            return 0;
          v10 = 64;
          v9 = sub_15C250(v31, 8, v8);
          v21 = sub_15C250(v33, 8, v8);
          goto LABEL_39;
        }
        v14 = v28;
        ++v12;
        v11 += 56;
        if ( v12 >= v28 )
          goto LABEL_37;
      }
      return 0;
    }
    v10 = 64;
  }
  v21 = v27 * v28;
LABEL_28:
  v22 = (void *)sub_93028(v21);
  if ( sub_230020(v9, v22, v21) )
  {
    free(v22);
    return 0;
  }
  if ( a3 )
    *a3 = v10;
  result = v22;
  if ( a2 )
    *a2 = v21;
  if ( a4 )
    *a4 = v9;
  return result;
}
