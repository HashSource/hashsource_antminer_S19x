int __fastcall sub_27E6C8(int a1, int a2)
{
  int v3; // r4
  int *v4; // r5
  void *v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int result; // r0

  v3 = sub_27E298(a1);
  v4 = (int *)sub_27E298(a2);
  if ( *(_DWORD *)v3 )
    free(*(void **)v3);
  v5 = *(void **)(v3 + 4);
  if ( v5 )
    free(v5);
  v6 = v4[1];
  v7 = v4[2];
  v8 = v4[3];
  *(_DWORD *)v3 = *v4;
  *(_DWORD *)(v3 + 4) = v6;
  *(_DWORD *)(v3 + 8) = v7;
  *(_DWORD *)(v3 + 12) = v8;
  result = *v4;
  if ( *v4 )
  {
    result = sub_327254(result);
    *(_DWORD *)v3 = result;
  }
  if ( v4[1] )
  {
    result = sub_1FE0D4(dword_48AA78);
    *(_DWORD *)(v3 + 4) = result;
  }
  return result;
}
