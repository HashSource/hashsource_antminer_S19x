void __fastcall sub_57610(_DWORD *a1)
{
  void (__fastcall *v2)(int, void *); // r3
  void *v3; // r1
  int v4; // r0
  void (__fastcall *v5)(int, void *); // r3
  void *v6; // r1
  int v7; // r0
  void (__fastcall *v8)(int, void *); // r3
  void *v9; // r1
  int v10; // r0
  void (__fastcall *v11)(_DWORD, _DWORD *); // r3

  if ( a1 )
  {
    v2 = (void (__fastcall *)(int, void *))a1[2];
    v3 = (void *)a1[4];
    v4 = a1[3];
    if ( v2 )
    {
      v2(v4, v3);
      v5 = (void (__fastcall *)(int, void *))a1[2];
      v6 = (void *)a1[5];
      v7 = a1[3];
      if ( v5 )
        goto LABEL_4;
    }
    else
    {
      free(v3);
      v5 = (void (__fastcall *)(int, void *))a1[2];
      v6 = (void *)a1[5];
      v7 = a1[3];
      if ( v5 )
      {
LABEL_4:
        v5(v7, v6);
        v8 = (void (__fastcall *)(int, void *))a1[2];
        v9 = (void *)a1[6];
        v10 = a1[3];
        if ( v8 )
        {
LABEL_5:
          v8(v10, v9);
          goto LABEL_6;
        }
LABEL_11:
        free(v9);
LABEL_6:
        v11 = (void (__fastcall *)(_DWORD, _DWORD *))a1[2];
        if ( v11 )
          v11(a1[3], a1);
        else
          j_free(a1);
        return;
      }
    }
    free(v6);
    v8 = (void (__fastcall *)(int, void *))a1[2];
    v9 = (void *)a1[6];
    v10 = a1[3];
    if ( v8 )
      goto LABEL_5;
    goto LABEL_11;
  }
}
