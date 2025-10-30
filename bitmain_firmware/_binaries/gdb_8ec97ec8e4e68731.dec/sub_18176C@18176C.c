int __fastcall sub_18176C(int result, _DWORD *a2)
{
  int v2; // r3
  int v3; // r5
  int v5; // r2
  void *v6; // r6
  int v7; // r2
  int v8; // r3
  int v9; // r0
  int v10; // r2
  int v11; // r3
  int v12; // r2
  int v13; // r3
  int v14; // r2
  int v15; // r3
  int v16; // r2
  int v17; // r3
  void *ptr; // [sp+0h] [bp-90h] BYREF
  char v19; // [sp+8h] [bp-88h] BYREF
  _DWORD v20[3]; // [sp+18h] [bp-78h] BYREF
  char v21; // [sp+24h] [bp-6Ch] BYREF
  _BYTE v22[92]; // [sp+34h] [bp-5Ch] BYREF

  v2 = a2[1];
  if ( v2 && **(_BYTE **)(v2 + 24) != 10 )
  {
    v3 = result;
    v6 = sub_92E28();
    if ( *a2 )
    {
      sub_257380(v3, "Value returned is ", v5, *a2);
      sub_257694(v3, "gdb-result-var", "$%d", a2[2]);
      sub_257380(v3, " = ", v7, v8);
      sub_266608(v22);
      sub_256760(v20);
      v20[1] = &v21;
      v9 = *a2;
      v20[0] = &off_3F2924;
      v20[2] = 0;
      v21 = 0;
      sub_266C84(v9, v20, v22);
      sub_25765C(v3, "return-value", v20);
      sub_257380(v3, &word_356638, v10, v11);
      sub_256478(v20);
    }
    else
    {
      sub_255DE4(&ptr, a2[1]);
      sub_257380(v3, "Value returned has type: ", v12, v13);
      sub_2575E8(v3, "return-type", ptr);
      sub_257380(v3, ".", v14, v15);
      sub_257380(v3, " Cannot determine contents\n", v16, v17);
      if ( ptr != &v19 )
        sub_339E64(ptr);
    }
    return sub_92E40((int)v6);
  }
  return result;
}
