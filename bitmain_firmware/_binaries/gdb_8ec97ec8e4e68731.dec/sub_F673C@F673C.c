int __fastcall sub_F673C(unsigned __int8 *a1, int a2, int a3)
{
  void *v6; // r9
  void *v7; // r5
  int v8; // r4
  int v10; // [sp+Ch] [bp-10h] BYREF
  unsigned __int8 v11; // [sp+14h] [bp-8h]

  off_47075C = (char *)dword_47AC98;
  dword_48AD2C = 1;
  if ( !byte_47AC94 )
  {
    v6 = sub_92E28();
    v7 = (void *)dword_47AC90;
    if ( a3 )
    {
      if ( *(_BYTE *)(dword_47AC90 + 88) )
      {
LABEL_7:
        sub_F59B4((int)&v10, (int)v7, a1, a2, a3);
        v8 = v10;
        dword_48ACBC = v11;
        sub_92E40((int)v6);
        return v8;
      }
    }
    else if ( !dword_47AC90 )
    {
LABEL_5:
      v7 = sub_9836C(0x6Cu);
      sub_F64C0((int)v7);
      dword_47AC90 = (int)v7;
      if ( dword_46D36C )
      {
        sub_F4ACC((int)v7, (int)a1, dword_48AAD4, dword_4900D8, 1);
        v7 = (void *)dword_47AC90;
      }
      goto LABEL_7;
    }
    sub_F56B0((_DWORD *)dword_47AC90);
    sub_33AC04(v7);
    goto LABEL_5;
  }
  return 0;
}
