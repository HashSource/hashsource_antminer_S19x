int __fastcall sub_1C8AB0(int result)
{
  int v1; // r3
  int v2; // r4
  int v3; // r5
  void *v4; // r0
  int v5; // r3
  int v6; // r6
  int v7; // r1
  int v8; // r3
  bool v9; // zf
  void *v10; // r6
  _BYTE *v11; // r1
  void *v12; // r0
  void *v13; // r3
  void *v14; // r7
  int v15; // r0
  int v16; // r0
  int v17; // r0
  _DWORD *v18; // r0
  int v19; // r0
  void *v20; // r7
  int v21; // r8
  int v22; // r4
  int *v23; // r0
  void *ptr; // [sp+8h] [bp-68h] BYREF
  _BYTE v25[64]; // [sp+Ch] [bp-64h] BYREF
  int v26; // [sp+4Ch] [bp-24h]

  if ( !*(_DWORD *)(result + 32) )
    return result;
  v1 = *(_DWORD *)(result + 8);
  v2 = result;
  if ( !v1 )
    goto LABEL_18;
  v3 = *(_DWORD *)(v1 + 4);
  result = sub_B894C(result);
  if ( v3 == result )
  {
    if ( *(_DWORD *)(v2 + 8) )
      goto LABEL_22;
    goto LABEL_18;
  }
  v4 = *(void **)(v2 + 8);
  *(_DWORD *)(v2 + 8) = 0;
  if ( !v4 )
  {
    *(_DWORD *)(v2 + 28) = 0;
    goto LABEL_18;
  }
  free(v4);
  v5 = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(v2 + 28) = 0;
  if ( !v5 )
  {
LABEL_18:
    v10 = sub_92E28();
    v11 = *(_BYTE **)(v2 + 4);
    dword_487CE0 = 0;
    sub_1C42A8((char **)&ptr, v11);
    v12 = *(void **)(v2 + 8);
    v13 = ptr;
    ptr = 0;
    *(_DWORD *)(v2 + 8) = v13;
    if ( v12 )
    {
      free(v12);
      if ( ptr )
        free(ptr);
    }
    *(_DWORD *)(v2 + 28) = dword_487CE0;
    result = sub_92E40((int)v10);
LABEL_22:
    if ( *(_DWORD *)(v2 + 28) )
    {
      if ( *(_DWORD *)(v2 + 24) != dword_487D2C )
        return result;
      v19 = sub_20F388(0);
      result = sub_C2360(v19, *(_DWORD *)(v2 + 28));
      if ( !result )
        return result;
    }
  }
  v6 = dword_487CFC;
  dword_487CFC = *(_DWORD *)(v2 + 12);
  sub_B79C8();
  sub_259F10("%d", *(_DWORD *)(v2 + 12));
  sub_B79E8();
  sub_259F10((const char *)&word_3B6A00);
  if ( *(_BYTE *)(v2 + 21) )
  {
    sub_B7A08();
    sub_259F10("x/");
    v7 = *(_DWORD *)(v2 + 16);
    if ( v7 != 1 )
      sub_259F10("%d", v7);
    sub_259F10("%c", *(unsigned __int8 *)(v2 + 20));
    v8 = *(unsigned __int8 *)(v2 + 20);
    v9 = v8 == 115;
    if ( v8 != 115 )
      v9 = v8 == 105;
    if ( !v9 )
      sub_259F10("%c", *(unsigned __int8 *)(v2 + 21));
    sub_259F10((const char *)&word_3E1F84);
    sub_B7A28();
    sub_259B34(*(_DWORD *)(v2 + 4));
    sub_B7A48();
    if ( *(_DWORD *)(v2 + 16) != 1 || *(_BYTE *)(v2 + 20) == 105 )
      sub_259F10((const char *)&word_356638);
    else
      sub_259F10("  ");
    sub_B7A68();
    v14 = sub_92E28();
    v15 = sub_14CD3C(*(int **)(v2 + 8));
    v16 = sub_26EBA8(v15);
    if ( *(_BYTE *)(v2 + 20) == 105 )
      ((void (__fastcall *)(_DWORD, int))loc_169FA0)(*(_DWORD *)(*(_DWORD *)(v2 + 8) + 4), v16);
    ((void (__fastcall *)(_DWORD))loc_1C8208)(*(_DWORD *)(v2 + 16));
    sub_92E40((int)v14);
  }
  else
  {
    sub_B7A08();
    if ( *(_BYTE *)(v2 + 20) )
      sub_259F10("/%c ", *(unsigned __int8 *)(v2 + 20));
    sub_B7A28();
    sub_259B34(*(_DWORD *)(v2 + 4));
    sub_B7A48();
    sub_259F10(" = ");
    sub_B7A28();
    sub_266628(v25, *(unsigned __int8 *)(v2 + 20));
    v26 = *(unsigned __int8 *)(v2 + 22);
    v20 = sub_92E28();
    v21 = sub_14CD3C(*(int **)(v2 + 8));
    v22 = *(unsigned __int8 *)(v2 + 21);
    v23 = (int *)sub_242F8C(v21);
    sub_1C57D8(v21, v22, (int)v25, *v23);
    sub_92E40((int)v20);
    sub_259F10((const char *)&word_356638);
  }
  v17 = sub_B7A88();
  v18 = (_DWORD *)sub_242F8C(v17);
  result = sub_25680C(*v18);
  dword_487CFC = v6;
  return result;
}
