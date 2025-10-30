int __fastcall sub_577DC(_DWORD *a1)
{
  void (__fastcall *v2)(int, void *); // r3
  void *v3; // r1
  int v4; // r0
  void (__fastcall *v5)(int, void *); // r3
  void *v6; // r1
  int v7; // r0
  void (__fastcall *v8)(_DWORD, _DWORD *); // r3

  if ( !a1 )
    return 0;
  v2 = (void (__fastcall *)(int, void *))a1[2];
  v3 = (void *)a1[40];
  v4 = a1[3];
  if ( !v2 )
  {
    free(v3);
    v5 = (void (__fastcall *)(int, void *))a1[2];
    v6 = (void *)a1[23];
    v7 = a1[3];
    if ( v5 )
      goto LABEL_4;
LABEL_10:
    free(v6);
    goto LABEL_5;
  }
  v2(v4, v3);
  v5 = (void (__fastcall *)(int, void *))a1[2];
  v6 = (void *)a1[23];
  v7 = a1[3];
  if ( !v5 )
    goto LABEL_10;
LABEL_4:
  v5(v7, v6);
LABEL_5:
  v8 = (void (__fastcall *)(_DWORD, _DWORD *))a1[2];
  if ( v8 )
    v8(a1[3], a1);
  else
    free(a1);
  return 0;
}
