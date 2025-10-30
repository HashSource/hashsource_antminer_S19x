void __fastcall sub_259344(int a1, char *a2, void *a3)
{
  int v4; // r6
  int v5; // r7
  int v6; // r5
  int v7; // r0
  void *v8; // r6
  int v9; // r2
  int v10; // r3
  int v11; // r3
  const char *v12; // lr
  const char *v13; // r12
  int v14; // r2
  int v15; // [sp+8h] [bp-3Ch] BYREF
  int v16; // [sp+Ch] [bp-38h]
  void *ptr[2]; // [sp+10h] [bp-34h] BYREF
  char v18; // [sp+18h] [bp-2Ch] BYREF
  void *v19; // [sp+28h] [bp-1Ch] BYREF
  char v20; // [sp+30h] [bp-14h] BYREF

  sub_93244((char **)ptr, a2, a3);
  if ( dword_48A9D8 && *(_DWORD *)sub_242FC8() == a1 )
  {
    sub_33B25C(&v15);
    v4 = v15;
    v5 = v16;
    v6 = sub_347ED4(v15, v16, 1000000000, 0);
    v7 = v4;
    v8 = ptr[1];
    sub_347ED4(v7, v5, 1000000000, 0);
    v11 = sub_347ED4(v9, v10, 1000, 0);
    if ( (int)v8 <= 0 )
    {
      v13 = "";
      v14 = v6;
      v12 = (const char *)ptr[0];
    }
    else
    {
      v12 = (const char *)ptr[0];
      v13 = (const char *)&word_356638;
      v14 = v6;
      if ( *((char *)ptr[0] + (unsigned int)v8 - 1) == 10 )
        v13 = "";
    }
    sub_931D8((char **)&v19, "%ld.%06ld %s%s", v14, v11, v12, v13);
    sub_256850((int)v19, a1);
    if ( v19 != &v20 )
      sub_339E64(v19);
  }
  else
  {
    sub_256850((int)ptr[0], a1);
  }
  if ( ptr[0] != &v18 )
    sub_339E64(ptr[0]);
}
