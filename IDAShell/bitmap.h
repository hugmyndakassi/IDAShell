// Copyright 2021 namazso <admin@namazso.eu>
// This file is part of IDAShell.
// 
// IDAShell is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// IDAShell is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with IDAShell.  If not, see <https://www.gnu.org/licenses/>.
#pragma once

using ARGB = ULONG;

HRESULT Create32BitHBITMAP(HDC hdc, const SIZE* psize, void** ppvBits, HBITMAP* phBmp);
HRESULT ConvertToPARGB32(HDC hdc, ARGB* pargb, HBITMAP hbmp, SIZE& sizImage, int cxRow);
HBITMAP IconToBitmapPARGB32(HICON hIcon, DWORD cx, DWORD cy);
