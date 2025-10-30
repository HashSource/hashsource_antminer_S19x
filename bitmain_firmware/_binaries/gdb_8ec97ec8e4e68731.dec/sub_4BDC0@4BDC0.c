int __fastcall sub_4BDC0(int a1, int a2, int a3, int a4)
{
  int v5; // r5
  char *v6; // r5
  const char *v7; // r0
  int v8; // r6
  const char *v10; // r0
  _DWORD v11[4]; // [sp+4h] [bp-1Ch] BYREF
  _BYTE v12[12]; // [sp+14h] [bp-Ch] BYREF

  v11[0] = a1;
  v11[1] = a2;
  v11[2] = a3;
  v5 = sub_98F68(v11);
  if ( dword_4736D8 )
    free((void *)dword_4736D8);
  sub_92080(v12);
  sub_4BD6C(v5, (int)v12);
  sub_92044(v12, "", 1);
  v6 = (char *)sub_92094(v12);
  if ( *v6 )
  {
    v10 = (const char *)sub_6FF98(a4);
    v8 = sub_93140("%s (%d), %s", v10, a4, v6);
  }
  else
  {
    v7 = (const char *)sub_6FF98(a4);
    v8 = sub_93140("%s (%d)", v7, a4);
  }
  dword_4736D8 = v8;
  free(v6);
  return v8;
}
