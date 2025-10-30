void __fastcall sub_2340B0(int a1)
{
  int v1; // r9
  _DWORD *v2; // r0
  char *v3; // r5
  char *v4; // r4
  int v5; // r2
  int v6; // r0
  int v7; // r10
  int v8; // r0
  _DWORD *v9; // r0
  int v10; // r0
  int v11; // r11
  const char *v12; // r0
  int v13; // r0
  _DWORD *v14; // r0
  int v15; // r0
  int v16; // r11
  char *v17; // r0
  int v18; // r0
  _DWORD *v19; // r0
  bool v20; // zf
  _DWORD *v21; // r0
  void *ptr; // [sp+Ch] [bp-10h] BYREF
  char *v23; // [sp+10h] [bp-Ch]

  v1 = sub_16F654(a1);
  v2 = sub_233F28(&ptr);
  v3 = v23;
  if ( ptr == v23 )
    goto LABEL_12;
  v4 = (char *)ptr + 40;
  v5 = 0;
  do
  {
    if ( *((_DWORD *)v4 - 6) == 4 )
    {
      v6 = off_489B30(
             &dword_4899A0,
             *((_DWORD *)v4 - 9) - *((_DWORD *)v4 - 10),
             *((_DWORD *)v4 - 10),
             0,
             *((_DWORD *)v4 - 9) - *((_DWORD *)v4 - 10),
             0);
      v7 = *(_DWORD *)sub_242FDC(v6);
      v8 = sub_2578AC(v7, 0);
      v9 = (_DWORD *)sub_242FDC(v8);
      v10 = sub_25738C(*v9, "Erasing flash memory region at address ");
      v11 = *(_DWORD *)sub_242FDC(v10);
      v12 = (const char *)sub_25AC8C(v1, *((_DWORD *)v4 - 10));
      v13 = sub_257694(v11, "address", "%s", v12);
      v14 = (_DWORD *)sub_242FDC(v13);
      v15 = sub_25738C(*v14, ", size = ");
      v16 = *(_DWORD *)sub_242FDC(v15);
      v17 = sub_98B08(*((_DWORD *)v4 - 9) - *((_DWORD *)v4 - 10), 0);
      v18 = sub_257694(v16, "size", "%s", v17);
      v19 = (_DWORD *)sub_242FDC(v18);
      sub_25738C(*v19, (const char *)&word_356638);
      v2 = (_DWORD *)sub_25734C(v7, 0);
      v5 = 1;
    }
    v20 = v3 == v4;
    v4 += 40;
  }
  while ( !v20 );
  if ( !v5 )
  {
LABEL_12:
    v21 = (_DWORD *)sub_242FDC(v2);
    sub_25738C(*v21, "No flash memory regions found.\n");
  }
  else
  {
    off_489B34();
  }
  if ( ptr )
    sub_339E64(ptr);
}
