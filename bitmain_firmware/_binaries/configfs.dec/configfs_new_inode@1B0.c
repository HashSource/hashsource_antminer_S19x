__int64 __fastcall configfs_new_inode(__int16 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // x19
  unsigned int next_ino; // w0
  __int64 v7; // x2
  __int64 v8; // x0
  __int64 v9; // x3
  __int64 v10; // x3
  __int64 v11; // x1
  __int64 v13; // x0
  __int64 v14; // x1

  v5 = new_inode(a3);
  if ( v5 )
  {
    next_ino = get_next_ino();
    v7 = *(_QWORD *)(v5 + 48);
    *(_QWORD *)(v5 + 56) = next_ino;
    *(_QWORD *)(v7 + 152) = &unk_4880;
    *(_QWORD *)(v5 + 32) = &unk_4980;
    v8 = *(_QWORD *)(a2 + 80);
    if ( v8 )
    {
      *(_WORD *)v5 = *(_WORD *)(v8 + 4);
      *(_DWORD *)(v5 + 4) = *(_DWORD *)(v8 + 8);
      *(_DWORD *)(v5 + 8) = *(_DWORD *)(v8 + 12);
      v9 = *(_QWORD *)(v8 + 32);
      *(_QWORD *)(v5 + 80) = *(_QWORD *)(v8 + 24);
      *(_QWORD *)(v5 + 88) = v9;
      v10 = *(_QWORD *)(v8 + 48);
      *(_QWORD *)(v5 + 96) = *(_QWORD *)(v8 + 40);
      *(_QWORD *)(v5 + 104) = v10;
      v11 = *(_QWORD *)(v8 + 64);
      *(_QWORD *)(v5 + 112) = *(_QWORD *)(v8 + 56);
      *(_QWORD *)(v5 + 120) = v11;
    }
    else
    {
      *(_WORD *)v5 = a1;
      v13 = current_time(v5);
      *(_QWORD *)(v5 + 112) = v13;
      *(_QWORD *)(v5 + 120) = v14;
      *(_QWORD *)(v5 + 96) = v13;
      *(_QWORD *)(v5 + 104) = v14;
      *(_QWORD *)(v5 + 80) = v13;
      *(_QWORD *)(v5 + 88) = v14;
    }
  }
  return v5;
}
