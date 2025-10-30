_DWORD *__fastcall sub_581A4(_DWORD *result)
{
  void (__fastcall *v1)(int, void *); // r3
  _DWORD *v2; // r4
  int v3; // r5
  void *v4; // r1
  int v5; // r0
  void (__fastcall *v6)(int, void *); // r3
  void *v7; // r1
  int v8; // r0
  void (__fastcall *v9)(_DWORD, _DWORD *); // r3

  if ( !result )
    return result;
  v1 = (void (__fastcall *)(int, void *))result[2];
  v2 = result;
  v3 = result[13];
  v4 = (void *)result[18];
  v5 = result[3];
  if ( !v1 )
  {
    free(v4);
    v6 = (void (__fastcall *)(int, void *))v2[2];
    v7 = (void *)v2[21];
    v8 = v2[3];
    if ( v6 )
      goto LABEL_4;
LABEL_10:
    free(v7);
    goto LABEL_5;
  }
  v1(v5, v4);
  v6 = (void (__fastcall *)(int, void *))v2[2];
  v7 = (void *)v2[21];
  v8 = v2[3];
  if ( !v6 )
    goto LABEL_10;
LABEL_4:
  v6(v8, v7);
LABEL_5:
  v9 = (void (__fastcall *)(_DWORD, _DWORD *))v2[2];
  if ( v9 )
    v9(v2[3], v2);
  else
    free(v2);
  return (_DWORD *)v3;
}
