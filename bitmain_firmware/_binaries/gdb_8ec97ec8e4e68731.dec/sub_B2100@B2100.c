void __fastcall sub_B2100(int a1, int a2)
{
  int v4; // r4
  int v5; // r0
  int v6; // r8
  int v7; // r6
  int v8; // r0
  _BYTE *v9; // r3
  int v10; // r2
  int v11; // r4
  int v12; // r0
  _BYTE *v13; // r3
  int v14; // r2
  double v15; // [sp+0h] [bp-48h] BYREF
  _DWORD v16[4]; // [sp+8h] [bp-40h] BYREF
  double ptr; // [sp+18h] [bp-30h] BYREF
  _DWORD v18[4]; // [sp+20h] [bp-28h] BYREF
  double v19; // [sp+30h] [bp-18h] BYREF
  _DWORD v20[4]; // [sp+38h] [bp-10h] BYREF

  v4 = sub_A3164(a1);
  v5 = sub_A31E8(a1);
  if ( !v4 )
  {
    sub_25A418(a2, "delta ??");
    return;
  }
  v6 = v5;
  LOBYTE(v16[0]) = 0;
  v7 = sub_26E978(v4);
  v8 = sub_26BC70(v4);
  ((void (*)(double *, int, int, const char *, ...))loc_252530)(
    &ptr,
    v7,
    v8,
    "%g",
    COERCE_DOUBLE((unsigned __int64)v16));
  v9 = (_BYTE *)LODWORD(v15);
  if ( (_DWORD *)LODWORD(ptr) == v18 )
  {
    sub_33B48C(&v15, &ptr);
    v9 = (_BYTE *)LODWORD(ptr);
  }
  else
  {
    if ( (_DWORD *)LODWORD(v15) == v16 )
    {
      v15 = ptr;
      v16[0] = v18[0];
    }
    else
    {
      v15 = ptr;
      v10 = v16[0];
      v16[0] = v18[0];
      if ( v9 )
      {
        LODWORD(ptr) = v9;
        v18[0] = v10;
        goto LABEL_6;
      }
    }
    LODWORD(ptr) = v18;
    v9 = v18;
  }
LABEL_6:
  HIDWORD(ptr) = 0;
  *v9 = 0;
  if ( (_DWORD *)LODWORD(ptr) != v18 )
    sub_339E64((void *)LODWORD(ptr));
  sub_25A418(a2, "delta %s", (const char *)LODWORD(v15));
  if ( sub_25E07C(v4, v6) )
    goto LABEL_9;
  v11 = sub_26E978(v6);
  v12 = sub_26BC70(v6);
  ((void (*)(double *, int, int, const char *, ...))loc_252530)(&v19, v11, v12, "%g", v15);
  v13 = (_BYTE *)LODWORD(v15);
  if ( (_DWORD *)LODWORD(v19) == v20 )
  {
    sub_33B48C(&v15, &v19);
    v13 = (_BYTE *)LODWORD(v19);
    goto LABEL_17;
  }
  if ( (_DWORD *)LODWORD(v15) == v16 )
  {
    v15 = v19;
    v16[0] = v20[0];
    goto LABEL_24;
  }
  v15 = v19;
  v14 = v16[0];
  v16[0] = v20[0];
  if ( !v13 )
  {
LABEL_24:
    LODWORD(v19) = v20;
    v13 = v20;
    goto LABEL_17;
  }
  LODWORD(v19) = v13;
  v20[0] = v14;
LABEL_17:
  HIDWORD(v19) = 0;
  *v13 = 0;
  if ( (_DWORD *)LODWORD(v19) != v20 )
    sub_339E64((void *)LODWORD(v19));
  sub_25A418(a2, " <'small = %s>", (const char *)LODWORD(v15));
LABEL_9:
  if ( (_DWORD *)LODWORD(v15) != v16 )
    sub_339E64((void *)LODWORD(v15));
}
