int __fastcall sub_C0164(char *a1, int a2)
{
  int v3; // r1
  char *v4; // r0
  int v5; // r7
  int v6; // r8
  __int64 i; // r4
  int v8; // r0
  char *v10; // r4
  int v11; // r0
  int v12; // r0
  int v13; // r0
  char *v14; // r0
  char *s1; // [sp+14h] [bp-20h] BYREF
  int v16; // [sp+18h] [bp-1Ch] BYREF
  _BYTE v17[4]; // [sp+1Ch] [bp-18h] BYREF
  int v18; // [sp+20h] [bp-14h]
  int v19; // [sp+24h] [bp-10h]
  int v20; // [sp+28h] [bp-Ch]
  int v21; // [sp+2Ch] [bp-8h]

  s1 = a1;
  if ( dword_489690 )
    sub_946E0("GDB can't do agent expression translation with overlays.");
  if ( !a1 )
    sub_51E9C("expression to translate");
  if ( !sub_5B24C((const char **)&s1, "-at", 3u) )
  {
    v10 = s1;
    v11 = sub_15F70C(0, v3);
    v12 = sub_15DDFC(v11);
    sub_BFFCC(v10, a2, v12);
    return sub_243C34(v13);
  }
  v17[0] = 0;
  v17[1] = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  s1 = (char *)sub_9360C(s1);
  sub_19CC9C(&v16, &s1, 0);
  ((void (__fastcall *)(int, int, _DWORD, _DWORD, _DWORD, _BYTE *, _DWORD, _DWORD))loc_19BDF0)(
    v16,
    1,
    0,
    0,
    0,
    v17,
    0,
    0);
  v4 = (char *)sub_9360C(s1);
  s1 = v4;
  if ( *v4 == 44 )
  {
    s1 = v4 + 1;
    v14 = (char *)sub_9360C(v4 + 1);
    v5 = v19;
    v6 = v20;
    for ( s1 = v14; v6 != v5; v5 += 16 )
    {
LABEL_6:
      for ( i = *(_QWORD *)(v5 + 4); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 40 )
        sub_BFFCC(s1, a2, *(_DWORD *)(i + 20));
    }
  }
  else
  {
    v5 = v19;
    v6 = v20;
    if ( v19 != v20 )
      goto LABEL_6;
  }
  if ( v16 )
    ((void (__fastcall *)(int *))loc_19D154)(&v16);
  v8 = sub_199294(v17);
  return sub_243C34(v8);
}
