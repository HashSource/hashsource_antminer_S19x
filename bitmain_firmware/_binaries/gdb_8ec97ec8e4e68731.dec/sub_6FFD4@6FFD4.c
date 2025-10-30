int sub_6FFD4()
{
  unsigned __int8 *v0; // r8
  int result; // r0
  int v2; // r11
  int v3; // r10
  int v4; // r9
  unsigned __int8 *v5; // r3
  int v6; // r2
  int v7; // t1
  bool v8; // zf
  int v9; // r1
  int v10; // r2
  int v11; // r3

  v0 = (unsigned __int8 *)dword_4748EC;
  result = dword_4748E8;
  if ( dword_4748EC < (unsigned int)dword_4748F0 )
  {
    v2 = dword_4748F4;
    v3 = dword_4748F8;
    v4 = 0;
    do
    {
      v5 = v0;
      v7 = *v0++;
      v6 = v7;
      v8 = v7 == 0;
      if ( v7 )
        v9 = (int)&unk_35E20C;
      else
        v9 = 1;
      if ( !v8 )
        v9 = *(unsigned __int8 *)(v9 + v6);
      v10 = 2 * result;
      if ( word_35E30C[result] )
      {
        v3 = (int)v5;
        v2 = result;
        v4 = 1;
      }
      while ( 1 )
      {
        v11 = 2 * (*(__int16 *)((char *)&unk_35E4AC + v10) + v9);
        if ( *(__int16 *)((char *)&unk_35E678 + v11) == result )
          break;
        result = *(__int16 *)((char *)&unk_35F0C8 + v10);
        if ( result > 206 )
          v9 = byte_360204[v9 - 3952];
        v10 = 2 * result;
      }
      result = *(__int16 *)((char *)&unk_35F2D8 + v11);
    }
    while ( (unsigned __int8 *)dword_4748F0 != v0 );
    if ( v4 )
    {
      dword_4748F4 = v2;
      dword_4748F8 = v3;
    }
  }
  return result;
}
