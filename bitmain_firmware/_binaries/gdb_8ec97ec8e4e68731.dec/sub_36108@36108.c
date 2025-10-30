int __fastcall sub_36108(int a1, void *a2, int a3, int a4, size_t n)
{
  int v8; // r5
  const char *v9; // r1
  int v10; // r1
  int v11; // r3
  _BYTE *v13; // r3
  int v14; // r2
  void *v15; // [sp+14h] [bp-34h] BYREF
  int v16; // [sp+18h] [bp-30h]
  _DWORD v17[4]; // [sp+1Ch] [bp-2Ch] BYREF
  const char *v18; // [sp+2Ch] [bp-1Ch]
  void *ptr; // [sp+30h] [bp-18h] BYREF
  int v20; // [sp+34h] [bp-14h]
  _DWORD v21[4]; // [sp+38h] [bp-10h] BYREF

  ptr = v21;
  v20 = 0;
  LOBYTE(v21[0]) = 0;
  v8 = n;
  if ( !dword_4878F0 )
  {
    v9 = ".note.linuxcore.siginfo";
    v18 = ".note.linuxcore.siginfo";
    goto LABEL_3;
  }
  sub_931D8(&v15, "%s/%ld", ".note.linuxcore.siginfo", dword_4878F0);
  v13 = ptr;
  if ( v15 == v17 )
  {
    sub_33B48C(&ptr, &v15);
    v13 = v15;
    goto LABEL_12;
  }
  if ( ptr == v21 )
  {
    ptr = v15;
    v20 = v16;
    v21[0] = v17[0];
    goto LABEL_16;
  }
  ptr = v15;
  v20 = v16;
  v14 = v21[0];
  v21[0] = v17[0];
  if ( !v13 )
  {
LABEL_16:
    v15 = v17;
    v13 = v17;
    goto LABEL_12;
  }
  v15 = v13;
  v17[0] = v14;
LABEL_12:
  v16 = 0;
  *v13 = 0;
  if ( v15 != v17 )
    sub_339E64(v15);
  v9 = (const char *)ptr;
  v18 = (const char *)ptr;
LABEL_3:
  v10 = sub_2AD7AC(dword_47ACB8, v9);
  if ( !v10 || !sub_2ADEDC(dword_47ACB8, v10, a2, v11, a3, a4, n) )
    v8 = -1;
  if ( ptr != v21 )
    sub_339E64(ptr);
  return v8;
}
